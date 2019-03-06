/*
 * Author: David Hodge
 * File: 6b.cpp
 * Date: 2019/03/05
 * Program that reads characters up until a newline and outputs
 */

#include <iostream>
using namespace std;

// readline - Loops through all characters from standard input
// until it reads a new line character
void readline();

int main() {
    string word1, word2;
    cout << "Please enter a word: ";
    cin >> word1;
    readline();
    cout << "Please enter another word: ";
    cin >> word2;
    cout << word1 << endl << word2 << endl;
    return 0;
}

void readline() {
    char symbol;
    do {
        cin.get(symbol); 
    } while (symbol != '\n');
}
