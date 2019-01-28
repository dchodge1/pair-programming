/*
 * PP1a.cpp
 * Stephen Souther
 * January 25, 2019
 * Calculates the sum, difference, product, and quotient of number1 and number2
 * */	

#include <iostream>

using namespace std;

int main(){
	int number1, number2;
	int sum, diff, prod, quot;

	cout << "Enter first number: ";
	cin >> number1;

	cout << "Enter second number: ";
	cin >> number2;

	sum = number1 + number2;
	diff = number1 - number2;
	prod = number1 * number2;
	quot = number1 / number2;

	cout << "The sum is: " << sum << endl;
	cout << "The difference is: " << diff << endl;
	cout << "The product is: " << prod << endl;
	cout << "The quotient is: " << quot << endl;
	return(0);
}
