# Install script for directory: C:/Work/Public/Reflect/External/llvm/tools/msbuild

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/Win32/Microsoft.Cpp.Win32.LLVM-vs2010.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/Win32/Microsoft.Cpp.Win32.LLVM-vs2012.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/Win32/Microsoft.Cpp.Win32.LLVM-vs2012_xp.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/Win32/toolset-vs2013.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/Win32/toolset-vs2013_xp.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/Win32/toolset-vs2014.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/Win32/toolset-vs2014_xp.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE RENAME "Microsoft.Cpp.Win32.LLVM-vs2010.targets" FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/Microsoft.Cpp.Win32.LLVM-vs2010.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE RENAME "Microsoft.Cpp.Win32.LLVM-vs2012.targets" FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/Microsoft.Cpp.Win32.LLVM-vs2012.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE RENAME "Microsoft.Cpp.Win32.LLVM-vs2012_xp.targets" FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/Microsoft.Cpp.Win32.LLVM-vs2012_xp.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/toolset-vs2013.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/toolset-vs2013_xp.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/toolset-vs2014.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/Win32" TYPE FILE FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/toolset-vs2014_xp.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/x64/Microsoft.Cpp.x64.LLVM-vs2010.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/x64/Microsoft.Cpp.x64.LLVM-vs2012.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/x64/Microsoft.Cpp.x64.LLVM-vs2012_xp.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/x64/toolset-vs2013.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/x64/toolset-vs2013_xp.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/x64/toolset-vs2014.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/build/llvm/tools/msbuild/x64/toolset-vs2014_xp.props")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE RENAME "Microsoft.Cpp.x64.LLVM-vs2010.targets" FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/Microsoft.Cpp.Win32.LLVM-vs2010.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE RENAME "Microsoft.Cpp.x64.LLVM-vs2012.targets" FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/Microsoft.Cpp.Win32.LLVM-vs2012.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE RENAME "Microsoft.Cpp.x64.LLVM-vs2012_xp.targets" FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/Microsoft.Cpp.Win32.LLVM-vs2012_xp.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/toolset-vs2013.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/toolset-vs2013_xp.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/toolset-vs2014.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild/x64" TYPE FILE FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/toolset-vs2014_xp.targets")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/tools/msbuild" TYPE DIRECTORY FILES "C:/Work/Public/Reflect/External/llvm/tools/msbuild/." FILES_MATCHING REGEX "/[^/]*\\.bat$" REGEX "/\\.svn$" EXCLUDE)
endif()

