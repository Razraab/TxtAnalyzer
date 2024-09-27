cmake_minimum_required(VERSION 3.22)

project(TextAnalyzer)

set(INCLUDE "${CMAKE_CURRENT_LIST_DIR}/include/")
file(GLOB SOURCES "${CMAKE_CURRENT_LIST_DIR}/src/*.cpp")

include_directories(${INCLUDE})
add_executable(${PROJECT_NAME} ${SOURCES})