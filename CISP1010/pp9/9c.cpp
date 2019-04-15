/*
	9c.cpp
	Stephen Souther
	4/15/19
*/

#include <iostream>

using namespace std;

void getData(string *firstName, int *age);

int main(){

	string name;
	int age;

	getData(&name, &age);

	cout << name << " " << age << endl;

	return(0);
}

void getData(string *firstName, int *age){
	cout << "Enter your name and age (seperated by a space): ";
	cin >> *firstName >> *age;
}
