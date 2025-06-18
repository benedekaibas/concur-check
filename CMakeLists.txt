cmake_minimum_required(VERSION 3.10)
project(concur_check)

set(CMAKE_CXX_STANDARD 17)

find_package(LLVM REQUIRED CONFIG)
find_package(Clang REQUIRED CONFIG)

include_directories(${LLVM_INCLUDE_DIRS})
include_directories(${CLANG_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(concur_check src/code/main.cpp)

target_link_libraries(concur_check
  clangTooling
  clangBasic
  clangASTMatchers
)

