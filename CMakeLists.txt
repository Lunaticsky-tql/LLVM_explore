cmake_minimum_required(VERSION 3.16)
project(LLVM)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_double learn_asm/test_double.cpp)
add_executable(10-alignment learn_asm/10-alignment.c)

add_executable(main sysy/main.c)
add_executable(all_in explore_process/all_in.c)
add_executable(test_link test_sysy_link/test_link.c)
add_executable(all_in_sysy explore_process/all_in_sysy.c)
add_executable(mem2reg mem2reg/mem2reg.c)