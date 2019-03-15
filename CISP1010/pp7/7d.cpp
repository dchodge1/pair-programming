/*
 * Author: David Hodge
 * File: 7d.cpp
 * Date: 2019/03/15
 * Asks user for monetary values and prints them all correctly formatted
 * in the function itself
 */

#include <iostream>
using namespace std;

const int MAX_AMOUNTS = 10;

void printMonies(double monies[], int valid);

int main() {
    int count = 0;
    double amounts[MAX_AMOUNTS];
    double value;
    cout << "Please enter an amount (-1 to end): ";
    cin >> value;
    while (value != -1 && count < MAX_AMOUNTS) {
        amounts[count] = value;
        count++;
        if (count < MAX_AMOUNTS) {
            cout << "Please enter another amount (-1 to end): ";
            cin >> value;
        }
    }
    printMonies(amounts, count);
    return 0;
}

void printMonies(double monies[], int valid) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    for (int i = 0; i < valid; i++) {
        cout << "$" << monies[i] << endl;
    }
}
