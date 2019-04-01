/*
	8b.cpp
	Stephen Souther
	April 1, 2019
*/

#include <iostream>
#include <cstring>

using namespace std;

void myStrcpy(char[], char[]);

int main(){

	char a[25], b[25];

	cout << "Enter a string: ";
	cin >> a;

	myStrcpy(a, b);

	cout << "Second string: " << b << endl;

	return(0);
}

void myStrcpy(char first[], char second[]){
	for(int i = 0; i < strlen(first)+1; i++){
		second[i] = first[i];
	}
}
