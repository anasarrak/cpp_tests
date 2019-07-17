add_executable(main main.cpp)

add_library(class STATIC
    Account.cpp
    Person.cpp
    ../include/Account.h
    ../include/Person.h
)
target_link_libraries(main PUBLIC class)

