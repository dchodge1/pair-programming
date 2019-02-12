/*
	3c.cpp
	Stephen Souther
	February 9, 2019
*/

#include <iostream>

using namespace std;

int main(){

	char input;

	cout << "H hardwood \nL laminate \nE engineered hardwood \nQ quit" << endl;

	do{
		cout << "Enter a menu selection: ";
		cin >> input;

		switch(input){
			case 'h':
			case 'H':
				cout << "You ordered hardwood" << endl;
				break;
			case 'l':
			case 'L':
				cout << "You ordered laminate" << endl;
				break;
			case 'e':
			case 'E':
				cout << "You ordered engineered hardwood" << endl;
				break;
			case 'Q':
			case 'q':
				break;
			default:
				cout << "Invalid choice" << endl;
		}

		if(input != 'Q' && input != 'q'){
			cout << "H hardwood \nL laminate \nE engineered hardwood \nQ quit" << endl;
		}

	} while(input != 'Q' && input != 'q');

	return(0);
}
