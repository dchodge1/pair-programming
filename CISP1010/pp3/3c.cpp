#include <iostream>
using namespace std;

int main() {
    //int result = 1,
    double result = 1;
    int factorial,
        n;
        
    cout << "Enter n: ";
    cin >> n;

    factorial = n;

    for(n; n > 0; n--) {
        result *= n;
    }
    cout.precision(0);
    cout << fixed << factorial << "! is " << result << endl;
}
