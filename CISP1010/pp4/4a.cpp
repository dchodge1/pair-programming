/*
 * Author: David Hodge
 * File: 4a.cpp
 * Date: 2019/02/13
 * Random card selector from 52 card deck
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string getSuit(int suit);
string getFace(int face);

int main() {
    int face, suit;

    srand(time(0));
    face = (rand() % 12) + 1;
    suit = (rand() % 3) + 1;
    cout << getFace(face) << " of " << getSuit(suit) << endl;
    return 0;
}

string getSuit(int suit) {
    switch(suit) {
        case 0:
            return "hearts";
        case 1:
            return "spades";
        case 2:
            return "clubs";
        case 3: 
            return "diamonds";
    }
}

string getFace(int face) {
    switch(face) {
        case 0:
            return "Two";
        case 1: 
            return "Three";
        case 2: 
            return "Four";
        case 3:
            return "Five";
        case 4: 
            return "Six";
        case 5:
            return "Seven";
        case 6:
            return "Eight";
        case 7: 
            return "Nine";
        case 8:
            return "Ten";
        case 9: 
            return "Jack";
        case 10:
            return "Queen";
        case 11:
            return "King";
        case 12:
            return "Ace";
    }
}
