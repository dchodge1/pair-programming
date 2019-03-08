/*
	6a.cpp
	Stephen Souther
	March 4, 2019
*/

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	ifstream fileIn;
	ofstream fileOut;

	double temp;
 	string outputFile, inputFile;

	cout << "Please enter an input file name: ";
	cin >> inputFile;

  	cout << "Please enter an output file name: ";
  	cin >> outputFile;


  	fileIn.open(inputFile);
  	if(!fileIn.fail()){

		// https://stackoverflow.com/questions/2390912/checking-for-an-empty-file-in-c?answertab=votes#tab-top
    		if(fileIn.peek() != ifstream::traits_type::eof()){
      			fileOut.open(outputFile);

      			do{
        			fileIn >> temp;
        			if(!fileIn.eof()){

          				fileOut << "The number is $" << fixed << setprecision(2) << temp << endl;
        			}
      			}
      			while(!fileIn.eof());
    		}
    		else{
			cout << "File " << inputFile << " is empty." << endl;
			exit(1);
 		}
	}
	else{
		cout << "File " << inputFile << " doesn't exist" << endl;
		exit(1);
	}

	fileIn.close();
	fileOut.close();
	return (0);
}
