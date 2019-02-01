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

	cout << i/j << endl;
	cout << i%j << endl;
	cout << j/i << endl;
	cout << j%i << endl;
	cout << x*i/j << endl;
	cout << x*(i/j) << endl;
	cout << x/y+i << endl;
	cout << j+y/x << endl;
	cout << (double)(i)/j+y << endl;

	return(0);
}
