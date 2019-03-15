/*
 * Author: David Hodge
 * File: 7c.cpp
 * Date: 2019/03/13
 * Asks user for monetary values and prints them all correctly formatted
 */

#include <iostream>
using namespace std;

const int MAX_AMOUNTS = 10;
/*
 * printMoney - outputs amount formatted as currency
 * params
 *  amount: dollar amount provided by user
 */
void printMoney(double amount);

int main() {
    int count = 0;
    double amounts[MAX_AMOUNTS];
    double value;
    cout << "Please enter an amount (-1 to end): "; 
    cin >> value;
    while(value != -1 && count < MAX_AMOUNTS) {
        amounts[count] = value;
        count++;
        if (count < MAX_AMOUNTS) {
            cout << "Please enter another amount (-1 to end): ";
            cin >> value;
        }
    } 
    for (int i = 0; i < count; i++) {
        printMoney(amounts[i]);
    }
    return 0;
}

void printMoney(double amount) {
    cout.setf(ios::showpoint);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "$" << amount << endl;
}
