cp -rfv ../clang ../llvm/tools/clang
mkdir generated
cd generated
cmake -G "Visual Studio 14" ..\..\llvm

