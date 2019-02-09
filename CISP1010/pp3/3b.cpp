/*
 * File: 3b.cpp
 * Author: David Hodge
 * Date: 2019/02/08
 * Calculates and displays the 2 raised to some non-negative number
 */

#include <iostream>
using namespace std;

int main() {

	int result = 1, 
	    base = 2, 
	    n;
    
    	cout << "Please enter n: ";
    	cin >> n;

    	if (n >= 0) {
		for (int i = 0; i < n; i++) {
			cout << i << " " << result << endl;
            		result *= base;
        	}

        	cout << n << " " << result << endl;
    	}

	return(0);
}
