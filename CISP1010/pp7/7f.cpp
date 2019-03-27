/*
	7f.cpp
	Stephen Souther
	March 13, 2019
*/

#include <iostream>

using namespace std;

void selectSort(double a[], int n);

int main(){

	double array[8] = {12, 1, 0, -5, 6, 8, 18, 10};
	selectSort(array, 8);

	for(int i = 0; i < 8; i++) {
        cout << array[i] << " ";
    }

	cout << endl;
	return(0);
}

void selectSort(double a[], int n) {
    int temp;
    int nMinus1 = n - 1;
    for(int top = 0; top < nMinus1; top++) {
        int minI = top;
        for(int i = minI + 1; i < n; i++) {
            if (a[i] < a[minI]) minI = i;
        }
        temp = a[top];
        a[top] = a[minI];
        a[minI] = temp;    
    }
}
