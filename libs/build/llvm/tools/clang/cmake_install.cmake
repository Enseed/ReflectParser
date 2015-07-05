# Install script for directory: C:/Work/Public/Reflect/External/llvm/tools/clang

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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "C:/Work/Public/Reflect/External/llvm/tools/clang/include/clang"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/include/clang-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/config\\.h$" EXCLUDE REGEX "/\\.svn$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "C:/Work/Public/Reflect/External/build/llvm/tools/clang/include/clang" FILES_MATCHING REGEX "/cmakefiles$" EXCLUDE REGEX "/[^/]*\\.inc$" REGEX "/[^/]*\\.h$")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "C:/Work/Public/Reflect/External/llvm/tools/clang/include/clang-c" FILES_MATCHING REGEX "/[^/]*\\.h$" REGEX "/\\.svn$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Work/Public/Reflect/External/build/llvm/tools/clang/utils/TableGen/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/tools/clang/include/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/tools/clang/lib/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/tools/clang/tools/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/tools/clang/runtime/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/tools/clang/unittests/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/tools/clang/test/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/tools/clang/docs/cmake_install.cmake")

endif()

