/*
 * File: 2a.cpp
 * Author: David Hodge
 * Date: 2019/02/01
 * Displays Douglas Adam's quote with formatting
 */
#include <iostream>
using namespace std;

int main() {
	double x = 42.1298;
	cout 	<< "The answer to the question of\n"
		<< "Life, the Universe, and Everything is ";

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	cout	<< (int) x
		<< ", not "
		<< x << endl
		<< "\tand not $";
	
	cout.precision(2);

	cout << x << endl;
	return 0;
}
