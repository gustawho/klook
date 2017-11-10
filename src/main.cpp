/* KLook
 * Copyright (c) 2011-2012 ROSA  <support@rosalab.ru>
 * Authors: Julia Mineeva, Evgeniy Auzhin, Sergey Borovkov.
 * License: GPLv3
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as
 *   published by the Free Software Foundation; either version 3,
 *   or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details
 *
 *   You should have received a copy of the GNU General Public
 *   License along with this program; if not, write to the
 *   Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <stdio.h>

#include <QApplication>
#include <QIcon>
#include <QCommandLineParser>
#include <QCommandLineOption>
#include <QSessionManager>

#include <KAboutData>
#include <KLocale>
#include <KDBusAddons/KDBusService>

#include "klookapp.h"

static const char description[] = I18N_NOOP("KLook is a quick file content preview program");
static const char version[] = "1.1";

int main(int argc, char *argv[])
{

	KAboutData aboutData(QStringLiteral("klook"), i18n("KLook"),
						version, i18n("A quick file content preview program"), KAboutLicense::GPL_V3,
						i18n("(c) ROSA 2011-2012, gustawho 2017"));

    aboutData.addAuthor(i18n("Julia Mineeva"),
						i18n("Developer"),
						QStringLiteral("julia.mineeva@osinit.ru"));

    aboutData.addAuthor(i18n("Evgeniy Auzhin"),
						i18n("Developer"),
						QStringLiteral("evgeniy.augin@osinit.ru"));

    aboutData.addAuthor(i18n("Sergey Borovkov"),
						i18n("Developer"),
						QStringLiteral("sergey.borovkov@osinit.ru"));

	aboutData.addAuthor(i18n("Gustavo Castro"),
						i18n("Developer, KF5 port"),
						QStringLiteral("me@gustawho.com"));

	QApplication::setWindowIcon(QIcon::fromTheme("klook"));

    QApplication app(argc, argv); // PORTING SCRIPT: move this to before the KAboutData initialization
    QCommandLineParser parser;
    KAboutData::setApplicationData(aboutData);
    parser.addVersionOption();
    parser.addHelpOption();
    //PORTING SCRIPT: adapt aboutdata variable if necessary
    aboutData.setupCommandLine(&parser);
    parser.process(app); // PORTING SCRIPT: move this to after any parser.addOption
    aboutData.processCommandLine(&parser);

    parser.addOption(QCommandLineOption(QStringList() << QLatin1String("i"), i18n("File index "), QLatin1String("i"), QLatin1String("0")));
    parser.addOption(QCommandLineOption(QStringList() << QLatin1String("embedded"), i18n("Turn on embedded mode"), QLatin1String("0")));
    parser.addOption(QCommandLineOption(QStringList() << QLatin1String("x"), i18n("X position of the icon"), QLatin1String("x"), QLatin1String("0")));
    parser.addOption(QCommandLineOption(QStringList() << QLatin1String("y"), i18n("Y position of the icon"), QLatin1String("y"), QLatin1String("0")));
    parser.addOption(QCommandLineOption(QStringList() << QLatin1String("w"), i18n("Width of the icon"), QLatin1String("width"), QLatin1String("0")));
    parser.addOption(QCommandLineOption(QStringList() << QLatin1String("h"), i18n("Height of the icon"), QLatin1String("height"), QLatin1String("0")));
    parser.addPositionalArgument(QLatin1String("file"), i18n("A required argument 'file'"), QLatin1String(0));

    KDBusService service(KDBusService::Unique);
	auto disableSessionManagement = [](QSessionManager &sm) {
		sm.setRestartHint(QSessionManager::RestartNever);
	};
	QObject::connect(&app, &QGuiApplication::commitDataRequest, \
	disableSessionManagement);
	QObject::connect(&app, \
	&QGuiApplication::saveStateRequest, disableSessionManagement);

    KLookApp session;
    return app.exec();
}
