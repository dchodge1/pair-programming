/*
	3a.cpp
	Stephen Souther
	February 6, 2019
*/

#include <iostream>

using namespace std;

int main(){
	double hours, rate, salary;

	cout << "Enter amount of hours: ";
        cin >> hours;

	while(hours > 0){
		cout << "Enter rate: ";
		cin >> rate;

		if(hours <= 40){
			salary = hours * rate;
		}
		else{
			salary = 40*rate+(hours - 40)*rate*1.5;
		}

		cout << "Salary: $" << salary << endl << endl;

		cout << "Enter amount of hours: ";
                cin >> hours;
	}
	return(0);
}
