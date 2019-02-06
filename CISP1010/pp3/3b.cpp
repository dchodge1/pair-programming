#include <iostream>

using namespace std;

int main(){

	int result = 2, n = 5;

	for(int i = 0; i <= n; i++){
		if(i == 0){
			cout << i << " : " << 1 << endl;
		}
		else if(i == 1){
			cout << i << " : " << 2 << endl;
		}
		else{
			result *=2;
			cout << i << " : " << result << endl;
		}
	}
	return(0);
}
