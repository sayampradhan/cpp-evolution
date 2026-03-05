#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1; 

        for (int i = 1; i <= n; i++) {
        result *= i; 
    }

    return result;
}

int main() {
    int n = 6;
    int fact = factorial(n);
    cout << "Factorial of " << n << " is: " << fact << endl;
    return 0;
}