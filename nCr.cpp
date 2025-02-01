# include <iostream>
using namespace std;

int factorial(int n);

int main(){
    int n = 0, r = 0;
    cout << "Program for nCr binomial factorial.\nEnter n: " << endl;
    cin >> n;
    cout << "Enter c: " << endl;
    cin >> r;
    
    int temp = n-r;
    cout << "The nCr is: " << factorial(n) / (factorial (r) * factorial(temp)) << "\n";

    return 0;
}

int factorial(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}