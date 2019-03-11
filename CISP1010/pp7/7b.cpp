/*
	7b.cpp
	Stephen Souther
	March 11, 2019
*/

#include <iostream>
#include <cmath>

using namespace std;

const int MAX_POWER = 11;

int main(){

	int power[MAX_POWER];

	for(int i = 0; i < MAX_POWER; i++){
		power[i] = pow(2, i);

		cout << "power[" << i << "] = " << power[i] << endl;
	}

	return(0);
}
