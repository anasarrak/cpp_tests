//
// Created by erle on 7/15/19.
//

#ifndef BANK_PERSON_H
#define BANK_PERSON_H

#include <iostream>
#include "Account.h"

using namespace std;

class Person {
public:
    Person(const string &name, const string &surname, int age, const string &address,Account* account);

    Person(const string &name, int age, Account* account);

    Person(Account* account);

    virtual ~Person();

public:

private:
    string name_;
    string surname_;
    int age;
    string address_;
    Account* account;
};


#endif //BANK_PERSON_H
