/*
 * File: 3c.cpp
 * Author: David Hodge
 * Date: 2019/02/08
 * Calculates and displays the factorial value of given number
 */

#include <iostream>
using namespace std;

int main() {
    double result = 1;
    int factorial,
        n;
        
    cout << "Enter n: ";
    cin >> n;

    factorial = n;

    for(n; n > 0; n--) {
        result *= n;
    }

    cout.precision(0);
    cout.setf(ios::fixed);

    cout << factorial << "! is " << result << endl;
    return 0;
}
