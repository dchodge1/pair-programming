/*
	5b.cpp
	Stephen Souther
	February 20, 2019
*/

#include <iostream>
#include <cmath>

using namespace std;

void figurelt(double in);

int main(){
	double input;

	cout << "Please enter a number: ";
	cin >> input;

	figurelt(input);
}

void figurelt(double in){
        if(fmod(in,2) == 0){
                cout << "even, ";
        }
        else{
                cout << "not even, ";
        }

        if(in >= 0){
                cout << "+, ";
        }
        else{
                cout << "-, ";
        }

        cout << round(in) << endl;
}
