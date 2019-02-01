/*
 * Author: David Hodge
 * Assignment: 2c
 * Date: 2019/02/01
*/

#include <iostream>
using namespace std;

int main() {
	int age;
	
	cout << "Please enter your age: ";
	cin >> age;

	if (age < 18) {
		cout << "Nothing\n";
	} else {
		if (age >= 18) cout << "You can vote\n";
		if (age >= 21) cout << "You can drink\n";
		if (age >= 25) cout << "You can rent a car\n";
		if (age >= 65) cout << "You can collect social security\n";
	}
	return 0;
}
