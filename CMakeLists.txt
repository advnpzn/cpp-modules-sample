cmake_minimum_required(VERSION 3.29)
project(sample)

# Setting C++ standard to 20 and it is compulsorily required
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Cmake C++ modules based library
add_library(foo)
target_sources(foo
        PUBLIC
        FILE_SET CXX_MODULES FILES
        foo.ixx
)

# Creating an executable target sample
add_executable(sample main.cpp)

# linking foo library with the executable target above
target_link_libraries(sample PRIVATE foo)

