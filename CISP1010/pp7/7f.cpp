/*
	7f.cpp
	Stephen Souther
	March 13, 2019
*/

#include <iostream>

const int ARRAY_SIZE = 8;

using namespace std;

void selectSort(double inputArray[], int arraySize);

int main(){

	double array[ARRAY_SIZE] = {12, 1, 0, -5, 6, 8, 18, 10};

	selectSort(array, ARRAY_SIZE);

	for(int i = 0; i < ARRAY_SIZE; i++){
                cout << array[i] << " ";
        }
	cout << endl;

	return(0);
}

void selectSort(double inputArray[], int arraySize){
	double smallest, largest;

	for(int i = 0; i < arraySize; i++){
		largest = inputArray[i];

		for(int j = 0; j < arraySize; j++){
			if(largest < inputArray[j]){
				int temp = largest;
				largest = inputArray[j];
				inputArray[j] = temp;
			}
			else if(smallest > inputArray[j]){
				smallest = inputArray[j];
			}
		}
		inputArray[i] = largest;
	}
	inputArray[arraySize-1] = largest;
}
