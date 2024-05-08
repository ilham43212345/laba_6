cmake_minimum_required(VERSION 3.5)
project(laba6 VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(laba6 main.cpp)
add_library(lab rhombus.cpp)

target_link_libraries(laba6 lab)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
