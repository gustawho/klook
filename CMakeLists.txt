project( klook )
cmake_minimum_required( VERSION 2.8.12 )

find_package(ECM REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

include(KDEInstallDirs)
include(KDECompilerSettings)
include(KDECMakeSettings)
include(ECMOptionalAddSubdirectory)
include(ECMAddAppIcon)
include(ECMInstallIcons)
include(WriteBasicConfigVersionFile)
include(FeatureSummary)

set(QT_MIN_VERSION "5.7.0")

find_package(Qt5 ${QT_MIN_VERSION} CONFIG REQUIRED COMPONENTS
    Core
    Gui
    Quick
    Qml
    QuickWidgets
    DBus)

find_package(KF5 REQUIRED
    CoreAddons Service Plasma Config
    XmlGui KIO ConfigWidgets I18n
    WindowSystem IconThemes Runner
    Declarative KDELibs4Support )

find_package(Phonon4Qt5 CONFIG REQUIRED)

add_definitions(-DQT_USE_FAST_CONCATENATION -DQT_USE_FAST_OPERATOR_PLUS -DQT_NO_URL_CAST_FROM_STRING)
add_definitions(-std=c++11)
include_directories(${CMAKE_SOURCE_DIR} ${CMAKE_BINARY_DIR})

add_subdirectory( icons )

set(EXIV2_MIN_VERSION "0.25")
find_package(Exiv2)
#macro_log_feature(EXIV2_FOUND "Exiv2" "Provides image metadata support" "http://www.exiv2.org" TRUE ${EXIV2_MIN_VERSION} "")

set( RESOURCES src/resources.qrc )
QT5_ADD_RESOURCES( QRC_SOURCES ${RESOURCES} )

file( GLOB qml_files "${CMAKE_CURRENT_SOURCE_DIR}/src/qml/*.qml" )

set( klook_SRCS src/main.cpp
                src/declarativeviewer.cpp
                src/video.cpp
                src/text.cpp
                src/file.cpp
                src/listitem.cpp
                src/previewgenerator.cpp
                src/previewprovider.cpp
                src/filemodel.cpp
                src/klookapp.cpp
                src/audio.cpp
                src/mimeprovider.cpp
                src/kpartsdeclarativeitem.cpp
                src/kpartswidget.cpp
                src/listitemcontent.cpp
                src/exifimageprovider.cpp
                src/rotatedimage.cpp
                ${qml_files} )

set_property(SOURCE src/rotatedimage.cpp PROPERTY COMPILE_FLAGS)

ecm_add_app_icon( klook_SRCS ICONS "${CMAKE_CURRENT_SOURCE_DIR}/icons/16-apps-klook.png"
                                   "${CMAKE_CURRENT_SOURCE_DIR}/icons/22-apps-klook.png"
                                   "${CMAKE_CURRENT_SOURCE_DIR}/icons/24-apps-klook.png"
                                   "${CMAKE_CURRENT_SOURCE_DIR}/icons/32-apps-klook.png"
                                   "${CMAKE_CURRENT_SOURCE_DIR}/icons/48-apps-klook.png"
                                   "${CMAKE_CURRENT_SOURCE_DIR}/icons/64-apps-klook.png"
                                   "${CMAKE_CURRENT_SOURCE_DIR}/icons/72-apps-klook.png" 
                                   "${CMAKE_CURRENT_SOURCE_DIR}/icons/128-apps-klook.png")
add_executable( klook ${klook_SRCS} ${QRC_SOURCES} )

target_link_libraries( klook ${EXIV2_LIBRARIES}
                       Qt5::Core
                       Qt5::Quick
                       Qt5::Widgets
                       KF5::Plasma
                       KF5::Declarative
                       KF5::KIOWidgets
                       KF5::KIOFileWidgets
                       KF5::KDELibs4Support
                       KF5::CoreAddons
                       KF5::IconThemes
                       KF5::ConfigCore
                       KF5::ConfigWidgets
                       Phonon::phonon4qt5 )

install( TARGETS klook ${INSTALL_TARGETS_DEFAULT_ARGS} )

install( FILES ${qml_files} DESTINATION ${DATA_INSTALL_DIR}/${PROJECT_NAME}/ )

install( DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/src/qml/images/
                 DESTINATION ${DATA_INSTALL_DIR}/${PROJECT_NAME}/images )

#Translations
#if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/locale)
#    find_package( Gettext REQUIRED )
#    add_subdirectory( locale )
#endif()
