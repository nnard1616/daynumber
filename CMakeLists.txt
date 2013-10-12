cmake_minimum_required(VERSION 2.6)

project(daynumber)

include_directories(include)

add_executable(daynumber "src/daynumber.cpp"
                         "include/daynumber.h")

