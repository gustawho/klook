# Install script for directory: /home/gustawho/Projects/klook

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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/klook" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/klook")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/klook"
         RPATH "/usr/local/lib64")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/gustawho/Projects/klook/BUILD/klook")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/klook" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/klook")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/klook"
         OLD_RPATH "::::::::::::::::"
         NEW_RPATH "/usr/local/lib64")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/klook")
    endif()
  endif()
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/klook" TYPE FILE FILES
    "/home/gustawho/Projects/klook/src/qml/AudioDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/Button.qml"
    "/home/gustawho/Projects/klook/src/qml/ControlPanel.qml"
    "/home/gustawho/Projects/klook/src/qml/ControlPanelButton.qml"
    "/home/gustawho/Projects/klook/src/qml/DefaultImage.qml"
    "/home/gustawho/Projects/klook/src/qml/Delegate.qml"
    "/home/gustawho/Projects/klook/src/qml/FolderDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/ImageDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/InfoItem.qml"
    "/home/gustawho/Projects/klook/src/qml/MimeDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/OkularDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/PlayButton.qml"
    "/home/gustawho/Projects/klook/src/qml/Preview.qml"
    "/home/gustawho/Projects/klook/src/qml/ProgressDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/ScrollBar.qml"
    "/home/gustawho/Projects/klook/src/qml/SingleDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/Slider.qml"
    "/home/gustawho/Projects/klook/src/qml/TextDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/VideoDelegate.qml"
    "/home/gustawho/Projects/klook/src/qml/main.qml"
    )
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "klook" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/klook/images" TYPE DIRECTORY FILES "/home/gustawho/Projects/klook/src/qml/images/")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/gustawho/Projects/klook/BUILD/icons/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/gustawho/Projects/klook/BUILD/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
