/*
 * Author: David Hodge
 * File: 8c.cpp
 * Date: 2019/04/01
 * Program that promps for age, determines input validity and birth year
 */
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cctype>
using namespace std;

void getAge(char age[]);
bool checkValidity(char age[]);
int convertAge(char age[]);

int main() {
    char strAge[4];
    int age;
    getAge(strAge);
    if (checkValidity(strAge)) {
        age = convertAge(strAge);
    }
    return 0;
}

void getAge(char age[]) {
    cout << "Please enter an age: ";
    cin.getline(age, 4);
}

bool checkValidity(char age[]) {
    bool validity = true;
    int length = strlen(age);
    for (int i = 0; i < length; i++) {
        if (!isdigit(age[i])) validity = false;
    }
    return validity;
}

int convertAge(char age[]) {
    int numericAge = atoi(age);
}
