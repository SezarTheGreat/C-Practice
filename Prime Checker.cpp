# include <iostream>
using namespace std;

int main(){
    bool isPrime = true;
    int n;

    cout << "Enter a number to check if the number is prime or not: ";
    cin >> n;
    
    for(int i = 2;i <= n-1;i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout << "The given number is prime number: " << "\n";
    }
    else if(isPrime == false){
        cout << "The given number is not prime number." << "\n";
    }
    else{
        cout << "Invalid output" << endl;
    }
    
    return 0;
}