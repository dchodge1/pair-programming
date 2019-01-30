#include <iostream>
using namespace std;

int main() {
	double x = 42.1298;
	cout 	<< "The answer to question of\n"
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
