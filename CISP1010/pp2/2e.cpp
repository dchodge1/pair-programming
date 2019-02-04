/*
 * File: 2e.cpp 
 * Author: David Hodge
 * Date: 2019/02/01
 * Switch statement to print marital status
*/

#include <iostream>
using namespace std;

int main() {
	char status;

	cout << "Please enter marital status, M for married & S for single: ";
	cin >> status;

	switch (status) {
		case 'M':
		case 'm':
			cout << "You entered married\n";
			break;
		case 'S':
		case 's':
			cout << "You entered single\n";
			break;
		default:
			cout << "Invalid status\n";
	}
	return 0;
}
