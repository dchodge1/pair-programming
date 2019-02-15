/*
 * Author: David Hodge
 * File: 4e.cpp
 * Date: 2019/02/15
 * Program to determine whether a number is positive or negative and ends given 'q'
 */

#include <iostream>
#include <string> 
#include <cstdlib>
using namespace std;

/*
 * num: number to evaluate
 * returns whether or not given number is positive
 */
bool isPositive(int num);

int main() {
    /* 
     * I want the sentinel value to be 'q' and I also need to handle negative values
     * so I am getting the initial value as a string and converting it to an integer below
     * rather than doing something even goofier to handle negative values with a char conversion
     */
    string value;
    int number;

    do {
        cout << "Please enter a number (or q to quit): ";
        cin >> value;
        /* 
         * convert given string to an integer
         * atoi() is a legacy function that expects a null terminated char array
         * so c_str() converts the user provided string to that for atoi() 
         * references:  http://www.cplusplus.com/reference/cstdlib/atoi/
         *              http://www.cplusplus.com/reference/string/string/c_str/
         *              https://stackoverflow.com/questions/37229205/use-of-atoi-function-in-c 
         */
        number = atoi(value.c_str());
        /*
         * only output if a number was provided
         * second condition is to catch 0 which would evaluate as false
         */
        if (number || value[0] == '0') {
            cout << (isPositive(number) ? "Is positive" : "Is negative") << endl;
        }
    } while (value != "q");
    return 0;
}

bool isPositive(int num) {
    return num >= 0;
}
