/*
 * Author: David Hodge
 * File: 6c.cpp
 * Date: 2019/03/05
 * Reads one character and outputs various character properties
 */

#include <iostream>
using namespace std;

/*
 * testCharacter - determines case and type of character
 * @param symbol - character to test
 * @returns result string containing test results for given character
 */
string testCharacter(char symbol);

int main() {
    char symbol;
    cout << "Please enter one character: ";
    cin.get(symbol);
    cout << testCharacter(symbol);
    return 0;
}

string testCharacter(char symbol) {
    string result = "";
    if (isupper(symbol)) result += "Is uppercase\n";
    if (islower(symbol)) result += "Is lowercase\n";
    if (isalpha(symbol)) result += "Is alphabetic\n";
    if (isdigit(symbol)) result += "Is a digit\n";
    if (isspace(symbol)) result += "Is white space\n";
    return result;
}
