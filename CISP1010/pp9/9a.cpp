/*
	9a.cpp
	Stephen Souther
	4/15/19
*/

#include <iostream>

using namespace std;

void mySwap(int *a, int *b);

int main(){

	int i, j;

	cout << "Enter first number: ";
	cin >> i;

	cout << "Enter second number: ";
        cin >> j;

	mySwap(&i, &j);
	cout << i << " " << j << endl;

	return(0);
}

void mySwap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
