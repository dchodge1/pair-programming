/*
 * Author: David Hodge
 * File: 9b.cpp
 * 2019/04/15
 * Program using pointers to determine various properties about
 * a given value.
 */

#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

using namespace std;

void figureIt(double *in, string *even, string *sign, int *rounded);

int main() {
    double input;
    string even, sign;
    int rounded;
    
    cout << "Pease enter a number (0 to quit): ";
    cin >> input;

    while (input != 0) {
        figureIt(&input, &even, &sign, &rounded);
        cout << even << sign << rounded << endl; 
        cout << "Please enter a number: ";
        cin >> input;
    } 
    return 0;
}

void figureIt(double *in, string *even, string *sign, int *rounded) {
    (fmod(*in, 2) == 0) ? *even = "Even, " : *even = "Not even, ";
    (*in >= 0) ? *sign = "+, " : *sign = "-, "; 
    *rounded = round(*in);
}

