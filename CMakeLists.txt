cmake_minimum_required(VERSION 2.8)
project(greet)

# python call c++ function
# set(greetSRC greet_wrapper.cpp)
# add_library(hello_ext SHARED ${greetSRC})
# set_target_properties(hello_ext PROPERTIES PREFIX "")

# python call c++ class
SET(CMAKE_BUILD_TYPE DEBUG)
SET(CMAKE_CXX_COMPILER "g++")
SET(CMAKE_CXX_FLAGS_DEBUG "-g -Wall -std=c++11 -pthread")

set(greetSRC world_class_wrapper.cpp)
add_library(hello SHARED ${greetSRC})
set_target_properties(hello PROPERTIES PREFIX "")

INCLUDE(FindPkgConfig)
pkg_check_modules(PYTHON REQUIRED python)
include_directories(/usr/include ${PYTHON_INCLUDE_DIRS})
SET(BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
# python call c++ function
# target_link_libraries(hello_ext boost_python)

# python call c++ class
target_link_libraries(hello boost_python)