#include <iostream>
#include <vector>
#include "../include/Person.h"
#include "../include/Account.h"

using namespace std;
int main() {

    /*Account* c = new Account();

    Person* p = new Person("Anas", 24, c);*/

    std::vector<std::string> names;
    names.push_back("Anas");
    names.push_back("Anas2");
    names.push_back("Anas3");

    for (std::vector<std::string>::iterator it = names.begin();
            it != names.end(); it++){
        cout << *it << endl;
    }

    return 0;
}