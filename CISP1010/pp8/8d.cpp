/*
	8d.cpp
	Stephen Souther
	April 1, 2019
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char line1[] = "I * cats!";
	char line2[25];
	char verb[] = "love";
	int index;

	for(index = 0; index < strlen(line1); index++){
		if(line1[index] == '*') break;
	}

	if(index < strlen(line1)){
		strncpy(line2, line1, index);
		line2[index] = '\0';
		strcat(line2, verb);
		strcat(line2, &line1[index+1]);
	}

	cout << line2 << endl;

	return(0);
}
