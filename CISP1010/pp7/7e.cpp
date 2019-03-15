/*
	7e.cpp
	Stephen Souther
	March 15, 2019
*/

#include <iostream>

const int ARRAY_SIZE = 8;

using namespace std;

int linearSearch(int inputArray[], int arraySize, int key);

int main(){
	int key, foundIndex,
	    array[ARRAY_SIZE] = {12, 1, 0, -5, 6, 8, 10, 18};


	cout << "Please enter a key number: ";
	cin >> key;

	foundIndex = linearSearch(array, ARRAY_SIZE, key);
	if(foundIndex != -1){
		cout << "Found element " << array[foundIndex] << " at index " << foundIndex << endl;
	}
	else{
		cout << "Not found" << endl;
	}

	return(0);
}

int linearSearch(int inputArray[], int arraySize, int key){

	for(int i = 0; i < arraySize; i++){
		if(key == inputArray[i]){
			return(i);
		}
	}

	return(-1);
}
