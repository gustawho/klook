# KLook
A quick preview tool based on Qt and QtQuick, allows users to look at the contents of a file in Dolphin without running any third application.

## Dependencies
To build KLook, make sure you have the following packages installed on your system:
* CMake >= 2.8.12
* KDE Frameworks 5
* Extra CMake Modules (ECM)
* Qt 5 (is suggested to use the most recent version available for your system)

## Compiling
Within the project directory:
1. `mkdir build`
2. `cd build`
3. `cmake .. && make && make install`

NOTE: Keep in mind that in order to use KLook within Dolphin, you also have to build it with the required patches.

## TODO:
* Move away from deprecated libraries (Eg. KUrl)
* Get rid of KDELibs4Support
* Redesign the QML interface
