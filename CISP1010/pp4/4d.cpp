/*
	4d.cpp
	Stephen Souther
	February 15, 2019
*/
#include <iostream>
#include <cmath>

using namespace std;
double cube(double input);

int main(){
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	double userInput;

	cout << "Please enter a number: ";
	cin >> userInput;

	cout << cube(userInput) << endl;

	return(0);
}

double cube(double input){
	return (pow(input, 3));
}
