cmake_minimum_required(VERSION 3.0)
project(PIA_tvar)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(tvar main.cpp Tvar.cpp Kruh.cpp)