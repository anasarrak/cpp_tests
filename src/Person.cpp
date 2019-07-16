//
// Created by erle on 7/15/19.
//

#include "../include/Person.h"

Person::~Person() {}

Person::Person(const string &name, const string &surname, int age, const string &address, Account *account)
        : name_(name), surname_(surname), age(age), address_(address), account(account) {}

Person::Person(const string &name, int age, Account* account){
    this->name_ = name;
    this->age = age;
    this->account = account;
}

Person::Person(Account *account){
    this->account = account;
}


