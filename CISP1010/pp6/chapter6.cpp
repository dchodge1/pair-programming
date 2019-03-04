#include <iostream>
#include <fstream>
//#include <cstring>
using namespace std;
int main()
{
	double num1;
	ifstream input;
	ofstream output;

	// open input file, read from it, close it
	input.open( "input.dat" );
	input >> num1; // syntax just like cin
	input.close( );

	// open output file, write to it, close it
	output.open( "output.dat" );
   // syntax just like cout
	output << "The number is: " << num1 << endl;	
	output.close( );

	return( 0 );
}

