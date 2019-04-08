/* 
 * Author: Stephen Souther
 * File: 10b.cpp
 * Date: 2019/04/08
 * Program to create and populate Pet given user input
 */
#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

struct Pet {
    char name[50];
    int age;
    bool neutered;
};

void getPet(Pet&);
void printPet(const Pet&);

int main() {
   	Pet p;

	getPet(p);
	printPet(p);

   	return 0;
}

void getPet(Pet& p){
	char temp;

    	cout << "Please enter a name: ";
    	cin >> p.name;

    	cout << "Please enter an age: ";
    	cin >> p.age;

    	cout << "Is " << p.name << " neutered (y/n)? ";
    	cin >> temp;

    	if (tolower(temp) == 'y') {
        	p.neutered = true;
    	} else {
        	p.neutered = false;
	}
}

void printPet(const Pet& p){
    	cout << p.name << " " << p.age << " " << boolalpha <<  p.neutered << endl;
}
