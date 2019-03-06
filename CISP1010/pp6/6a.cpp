/*
	6a.cpp
	Stephen Souther
	March 4, 2019
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream fileIn;
	ofstream fileOut;

	int temp;

	fileIn.open("./input.dat");
	fileOut.open("./output.dat");

	do{
		fileIn >> temp;
		if(!fileIn.eof()){
			fileOut << "The number is " << temp << endl;
		}
	}
	while(!fileIn.eof());

	fileIn.close();
	fileOut.close();
	return(0);
}
