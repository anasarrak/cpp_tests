#include <iostream>
#include "../include/Person.h"
#include "../include/Account.h"

int main() {

    Account* c = new Account();

    Person* p = new Person("Anas", 24, c);

    return 0;
}