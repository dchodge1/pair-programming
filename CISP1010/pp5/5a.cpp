/*
 * Author: David Hodge
 * File: 5a.cpp
 * Date: 2019/02/20
 * Program to swap values using reference variables
 */

#include <iostream>
using namespace std;

/*
 * first: reference variable to swap with second
 * second: reference variable to swap with first
 * Post-condition: values of first and second are swapped
 * returns nothing
 */
void myswap(int& first,int& second);

int main() {
    int x, y;
    cout << "Please enter two integers seperated by a space: ";
    cin >> x >> y;
    myswap(x, y);
    cout << x << " " << y << endl;
    return 0;
}

void myswap(int& first, int& second) {
    int temp = first;
    first = second;
    second = temp;
}
