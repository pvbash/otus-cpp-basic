cmake_minimum_required(VERSION 3.8)
project(testsum CXX)
add_executable(testsum testsum.cpp)
target_compile_features(testsum PUBLIC cxx_std_17)
if(MSVC)
    target_compile_options(testsum PUBLIC /W4 /WX)
else()
    target_compile_options(testsum PUBLIC -Wall -Wextra -Werror -pedantic)
endif()