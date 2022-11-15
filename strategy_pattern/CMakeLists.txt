cmake_minimum_required(VERSION 3.23)
project(strategy_pattern)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/Solver)

file(GLOB SOLVER Solver/*.*)
file(GLOB EQUATION Equation.*)

add_executable(strategy_pattern main.cpp ${EQUATION} ${SOLVER})