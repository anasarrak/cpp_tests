add_executable(main main.cpp)

add_library(class STATIC
        Account.cpp
    ../include/Account.h
        Person.cpp
    ../include/Person.h
    )

target_link_libraries(main PUBLIC class)