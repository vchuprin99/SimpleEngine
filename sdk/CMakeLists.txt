cmake_minimum_required(VERSION 3.25)

project(sdk)

add_executable(sdk src/main.cpp)
target_link_libraries(sdk PRIVATE core)

set_property(TARGET core PROPERTY CXX_STANDARD 20)