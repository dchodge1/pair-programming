/*
 * Author: David Hodge
 * File: 4e.cpp
 * Date: 2019/02/15
 * Program to determine whether a number is positive or negative
 */

#include <iostream>
using namespace std;

/*
 * num: number to evaluate
 * returns whether or not given number is positive
 */
bool isPositive(int num);

int main() {
    int number;

    do {
        cout << "Please enter a number (or q to quit): ";
        cin >> number;
        cout << (isPositive(number) ? "Is positive" : "Is negative") << endl;
    } while ((char)number != 'q');
    return 0;
}

bool isPositive(int num) {
    if (num < 0) return false;
    else return true;
}
