#include <iostream>
using namespace std;

int main(){

	int result = 1, 
        base = 2, 
        n;
    
    cout << "Please enter n: ";
    cin >> n;

	for(int i = 0; i < n; ++i){
		result *= base;
	}

    cout << n << " " << result << endl;
	return(0);
}
