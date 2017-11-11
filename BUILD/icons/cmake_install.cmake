# Install script for directory: /home/gustawho/Projects/klook/icons

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/128x128/apps" TYPE FILE RENAME "klook.png" FILES "/home/gustawho/Projects/klook/icons/128-apps-klook.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/16x16/apps" TYPE FILE RENAME "klook.png" FILES "/home/gustawho/Projects/klook/icons/16-apps-klook.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/22x22/apps" TYPE FILE RENAME "klook.png" FILES "/home/gustawho/Projects/klook/icons/22-apps-klook.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/24x24/apps" TYPE FILE RENAME "klook.png" FILES "/home/gustawho/Projects/klook/icons/24-apps-klook.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/32x32/apps" TYPE FILE RENAME "klook.png" FILES "/home/gustawho/Projects/klook/icons/32-apps-klook.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/48x48/apps" TYPE FILE RENAME "klook.png" FILES "/home/gustawho/Projects/klook/icons/48-apps-klook.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/64x64/apps" TYPE FILE RENAME "klook.png" FILES "/home/gustawho/Projects/klook/icons/64-apps-klook.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/72x72/apps" TYPE FILE RENAME "klook.png" FILES "/home/gustawho/Projects/klook/icons/72-apps-klook.png")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/local/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/local/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

