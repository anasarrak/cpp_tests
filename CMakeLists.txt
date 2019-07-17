cmake_minimum_required(VERSION 3.14)
project(Bank)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_library(Account SHARED
        src/Account.cpp)
add_library(Person SHARED
        src/Person.cpp)

add_executable(main src/main.cpp)

target_link_libraries(main Account Person)
