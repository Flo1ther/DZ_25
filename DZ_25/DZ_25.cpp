#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
int main()
{
    Human Person;
    cout << "Enter user name: ";
    cin >> Person.name;

    cout << "Enter user age: ";
    cin >> Person.age;
    askinfo(Person);
  
}

