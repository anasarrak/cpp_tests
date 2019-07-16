cmake_minimum_required(VERSION 3.14)
project(Bank)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(main ${SOURCES})

target_include_directories(Bank PUBLIC ${SOURCES})