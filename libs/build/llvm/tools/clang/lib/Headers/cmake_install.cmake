# Install script for directory: C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/3.7.0/include" TYPE FILE PERMISSIONS OWNER_READ OWNER_WRITE GROUP_READ WORLD_READ FILES
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/adxintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/altivec.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/ammintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/arm_acle.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avx2intrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avx512bwintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avx512erintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avx512fintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avx512vlbwintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avx512vlintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avx512dqintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avx512vldqintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/avxintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/bmi2intrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/bmiintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/cpuid.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/cuda_builtin_vars.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/emmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/f16cintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/float.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/fma4intrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/fmaintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/htmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/htmxlintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/ia32intrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/immintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/Intrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/inttypes.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/iso646.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/limits.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/lzcntintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/mm3dnow.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/mmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/mm_malloc.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/module.modulemap"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/nmmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/pmmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/popcntintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/prfchwintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/rdseedintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/rtmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/s390intrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/shaintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/smmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/stdalign.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/stdarg.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/stdatomic.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/stdbool.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/stddef.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/__stddef_max_align_t.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/stdint.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/stdnoreturn.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/tbmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/tgmath.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/tmmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/unwind.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/vadefs.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/varargs.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/__wmmintrin_aes.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/wmmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/__wmmintrin_pclmul.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/x86intrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/xmmintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/xopintrin.h"
    "C:/Work/Public/Reflect/External/llvm/tools/clang/lib/Headers/xtestintrin.h"
    "C:/Work/Public/Reflect/External/build/llvm/tools/clang/lib/Headers/arm_neon.h"
    )
endif()

