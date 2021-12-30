cmake_minimum_required(VERSION 3.20)
project(Car_Simulator C)

set(CMAKE_C_STANDARD 99)

add_executable(Car_Simulator main.c Car.c)
