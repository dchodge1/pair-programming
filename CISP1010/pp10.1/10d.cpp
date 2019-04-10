/*
 * Author: Stephen Souther
 * File: 10c.cpp
 * Date: 2019/04/10
 * Program to create, initialize and print multiple Pets and sorts my name
 */

#include <iostream>
#include <cctype>
#include <iomanip>
#include <cstring>

using namespace std;

struct Pet {
    	char name[50];
    	int age;
    	bool neutered;
};

const int LIMIT = 5;
void getPets(Pet[], int);
void getPet(Pet&);
void printPet(Pet[], int);

int main() {
   	Pet pets[LIMIT];

	getPets(pets, LIMIT);
	printPet(pets, LIMIT);

   	return 0;
}

void getPets(Pet pets[], int num){
    	for (int i = 0; i < num; i++) {
        	getPet(pets[i]);
	}
}

void getPet(Pet& p) {
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

void printPet(Pet pets[], int num){
	cout << "Name\tAge\tNeutered" << endl;
	cout << "----------------------" << endl;


	int min = LIMIT - 1;
	for(int top = 0; top < min; top++){
		int minIndex = top;
		for(int i = minIndex++; i < LIMIT; i++){
			if(strcmp(pets[i].name, pets[minIndex].name) < 0){
				minIndex = i;
			}
		}
		Pet temp  = pets[top];
		pets[top] = pets[minIndex];
		pets[minIndex] = temp;
	}


	for (int i = 0; i < num; i++) {
		cout << pets[i].name << "\t" << pets[i].age << "\t" << ( pets[i].neutered ? "Yes" : "No" ) << endl;
    	}
}
