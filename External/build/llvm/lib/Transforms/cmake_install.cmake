# Install script for directory: C:/Work/Public/Reflect/External/llvm/lib/Transforms

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/Utils/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/Instrumentation/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/InstCombine/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/Scalar/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/IPO/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/Vectorize/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/Hello/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/ObjCARC/cmake_install.cmake")

endif()
