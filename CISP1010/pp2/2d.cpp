/*
	2d.cpp
	Stephen Souther
	January 31, 2019

	outputs letter grade based on numeric grade
*/

#include <iostream>

using namespace std;

int main(){
	double grade;
	cout << "Enter numeric grade: ";
	cin >> grade;

	if(grade >= 93){
		cout << "A" << endl;
	}
	else if(grade >= 83 && grade < 93){
		cout << "B" << endl;
	}
	else if(grade >= 73 && grade < 83){
		cout << "C" << endl;
	}
	else if(grade >= 65 && grade < 73){
		cout << "D" << endl;
	}
	else{
		cout << "F" << endl;
	}

	return(0);
}
