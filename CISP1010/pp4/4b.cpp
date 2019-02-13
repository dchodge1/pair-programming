/*
	4b.cpp
	Stephen Souther
	February 13, 2019
*/

#include <iostream>
#include <cmath>

using namespace std;

void squareAndPrint(){
	double input;

	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << "Please enter a number: ";
	cin >> input;

	cout << static_cast<double>(pow(input, 2)) << endl;
}

int main(){
	squareAndPrint();
	return(0);
}
