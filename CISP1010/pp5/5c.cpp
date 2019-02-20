/*
 * Author: David Hodge
 * File: 5c.cpp
 * Date: 2019/02/20
 * Gets first name and age from user then assigns via reference
 */
#include <iostream>
#include <string>
using namespace std;

/*
 * firstName: variable in which to place user provided value for name
 * age: variable in which to place user provided value for age
 * Post-condition: firstName and age populated with user-provided values
 * returns nothing
 */
void getData(string& firstName, int& age);

int main() {
    string name;
    int age;

    getData(name, age);
    cout    << "First name: " << name << endl
            << "Age: " << age << endl;
    return 0;
}

void getData(string& firstName, int& age) {
    cout << "Please enter your first name and age seperated by a space: ";
    cin >> firstName >> age;
}
