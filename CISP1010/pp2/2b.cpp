/*
	2b.cpp
	Stephen Souther
	February 1, 2019
*/

#include <iostream>

using namespace std;

int main(){
	int i = 3, j = 10;
	double x = 9.9, y = -0.6;

	cout << "i/j is " << i/j << endl;
	cout << "i%j is " << i%j << endl;
	cout << "j/i is " << j/i << endl;
	cout << "j%i is " << j%i << endl;
	cout << "x*i/j is " << x*i/j << endl;
	cout << "x*(i/j) is " << x*(i/j) << endl;
	cout << "x/y+i is " << x/y+i << endl;
	cout << "j+y/x is " << j+y/x << endl;
	cout << "static_cast<double>(i)/j+y is " << static_cast<double>(i)/j+y << endl;

	return(0);
}
