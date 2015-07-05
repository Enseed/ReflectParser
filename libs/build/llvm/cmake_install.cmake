# Install script for directory: C:/Work/Public/Reflect/External/llvm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/LLVM")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "llvm-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "C:/Work/Public/Reflect/External/llvm/include/llvm"
    "C:/Work/Public/Reflect/External/llvm/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/license\\.txt$" REGEX "/\\.svn$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "llvm-headers")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "C:/Work/Public/Reflect/External/build/llvm/include/llvm" FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/cmakefiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE REGEX "/\\.svn$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Support/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/TableGen/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/TableGen/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/include/llvm/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/FileCheck/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/PerfectShuffle/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/count/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/not/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/llvm-lit/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/yaml-bench/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/unittest/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/projects/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/tools/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/examples/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/test/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/unittests/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/utils/KillTheDoctor/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/docs/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/cmake/modules/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "C:/Work/Public/Reflect/External/build/llvm/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
