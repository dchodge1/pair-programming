/*
 * Author: David Hodge
 * File: 8e.cpp
 * Date: 2019/04/02
 * Program to reverse given string
 */

#include <iostream>
#include <cstring>
using namespace std;

const int LIMIT = 50;
void getUserString(char userString[]);
void reverseString(char initial[], char reversed[]);

int main() {
    char userString[LIMIT], reversedString[LIMIT];
    getUserString(userString);
    reverseString(userString, reversedString);
    cout << reversedString << endl;
    return 0;
}

void getUserString(char userString[]) {
    cout << "Please enter a string to reverse: ";
    cin.getline(userString, LIMIT);
}

void reverseString(char initial[], char reversed[]) {
    int length = strnlen(initial, LIMIT - 1);
    int count = 0;
    for (int i = length - 1; i >= 0; i--) {
        reversed[count] = initial[i];
        count++;
    }
    reversed[count] = '\0';
}
