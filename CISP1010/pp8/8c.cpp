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
#include <ctime>
using namespace std;

const int LIMIT = 4;
void getAge(char age[]);
bool checkValidity(char age[]);
bool convertAge(char age[], int& numericAge);
int getCurrentYear();

int main() {
    char strAge[LIMIT];
    int age, currentYear, diff;
    getAge(strAge);
    if (checkValidity(strAge) && convertAge(strAge, age)) {
        currentYear = getCurrentYear();
        diff = currentYear - age;
        cout << "Born in " << diff << endl;
    } else {
        cout << "Age must be a positive integer" << endl;
    }
    return 0;
}

void getAge(char age[]) {
    cout << "Please enter an age: ";
    cin.getline(age, LIMIT);
}

bool checkValidity(char age[]) {
    bool validity = true;
    int length = strlen(age);
    for (int i = 0; i < length; i++) {
        if (!isdigit(age[i])) validity = false;
    }
    return validity;
}

bool convertAge(char age[], int& numericAge) {
    int n = atoi(age);
    if (n > 0) {
        numericAge = n;
        return true;
    } else {
        return false;
    }
}

/*
 * References:
 *  http://www.cplusplus.com/reference/ctime/time/
 *  http://www.cplusplus.com/reference/ctime/localtime/
 */
int getCurrentYear() {
    time_t currentTime = time(0);
    tm *nowtm = localtime(&currentTime);
    return 1900 + nowtm->tm_year;
}
