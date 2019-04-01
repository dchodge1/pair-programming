/*
 * Author: David Hodge
 * File: 8a.cpp
 * Date: 2019/04/01
 * Program to print to given words in alphabetical order
 */

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[25], b[25];
    int comparisonValue;
    cout << "Please enter two words (separated by a space): ";
    cin >> a >> b;
    comparisonValue = strcmp(a, b);
    if ( comparisonValue <= 0) {
        cout << a << " " << b << endl;
    } else { 
        cout << b << " " << a << endl;
    }
    return 0;
}
