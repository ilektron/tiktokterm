cmake_minimum_required(VERSION 3.10)

# set the project name
project(tiktokterm VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(tiktokterm src/main.cpp)

target_link_libraries(tiktokterm ssl crypto)
