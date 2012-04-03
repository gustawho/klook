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

#include "mimeprovider.h"

#include <kfileitem.h>
#include <kicon.h>

MimeProvider::MimeProvider()
    : QDeclarativeImageProvider( Pixmap )
{
}

QPixmap MimeProvider::requestPixmap( const QString& id, QSize* size, const QSize &requestedSize )
{
    KIcon icon(KMimeType::iconNameForUrl(id));
    QPixmap pixmap;
    pixmap = icon.isNull() ? QPixmap( ":images/pla-empty-box.png" ) : icon.pixmap(1000);
    if ( requestedSize.isValid() )
        pixmap = pixmap.scaled( requestedSize, Qt::KeepAspectRatio, Qt::SmoothTransformation );
    *size = pixmap.size();

    return pixmap;
}
