cmake_minimum_required (VERSION 2.6)
project (SoundCity)

SET(CMAKE_CXX_FLAGS  "-std=c++11 -g")


include_directories( ${PROJECT_SOURCE_DIR}/include )
add_subdirectory( ${PROJECT_SOURCE_DIR}/test )