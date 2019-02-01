/* 
 * Author: David Hodge
 * Assignment: 2e
 * Date: 2019/02/01
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
			break;
	}
	return 0;
}
