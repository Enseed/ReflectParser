# Install script for directory: C:/Work/Public/Reflect/External/llvm/lib

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
  include("C:/Work/Public/Reflect/External/build/llvm/lib/IR/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/IRReader/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/CodeGen/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Bitcode/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Transforms/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Linker/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Analysis/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/LTO/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/MC/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Object/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Option/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/DebugInfo/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/ExecutionEngine/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Target/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/AsmParser/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/LineEditor/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/ProfileData/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Fuzzer/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/Passes/cmake_install.cmake")
  include("C:/Work/Public/Reflect/External/build/llvm/lib/LibDriver/cmake_install.cmake")

endif()

