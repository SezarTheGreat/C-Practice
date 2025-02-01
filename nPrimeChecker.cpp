#include <iostream>
using namespace std;

bool isPrime(int n);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers between 2 and " << n << " are: ";
    
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    return 0;
}

bool isPrime(int n) {
    if (n < 2) return false;
    
    for (int i = 2; i * i <= n; i++) {  // Optimized check up to sqrt(n)
        if (n % i == 0) {
            return false;
        }
    }
    
    return true;
}
