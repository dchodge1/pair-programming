/*
 * File: pp1b.cpp
 * Author: David Hodge
 * This program calculates forces given mass and acceleration
 */
#include <iostream>
using namespace std;

int main()
{
	double mass, acceleration, force;

	cout << "Enter a mass (kg): ";
	cin >> mass;
	cout << "Enter an acceleration (m/s^2): ";
	cin >> acceleration;

	force = mass * acceleration;
	
	cout <<  "Total force (N): " << force << endl;
	return (0);
}
