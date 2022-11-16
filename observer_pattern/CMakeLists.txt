cmake_minimum_required(VERSION 3.23)
project(observer_pattern)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR}/Observables)
include_directories(${PROJECT_SOURCE_DIR}/Observers)

file(GLOB OBSERVABLES ${PROJECT_SOURCE_DIR}/Observables/*.*)
file(GLOB OBSERVERS   ${PROJECT_SOURCE_DIR}/Observers/*.*)

add_executable(observer_pattern main.cpp ${OBSERVERS} ${OBSERVABLES})