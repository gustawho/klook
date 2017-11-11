# CMake generated Testfile for 
# Source directory: /home/gustawho/Projects/klook
# Build directory: /home/gustawho/Projects/klook/BUILD
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(appstreamtest "/usr/bin/cmake" "-DAPPSTREAMCLI=/usr/bin/appstreamcli" "-DINSTALL_FILES=/home/gustawho/Projects/klook/BUILD/install_manifest.txt" "-P" "/usr/share/ECM/kde-modules/appstreamtest.cmake")
subdirs("icons")
