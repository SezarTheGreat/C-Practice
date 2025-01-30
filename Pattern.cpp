#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int i,j;
    
    //square pattern
    for (i = 0;i<n; i++){
        for(j = 1;j<n;j++){
            cout << j << " ";
        }
        cout << endl;
    }//Output
    //1 2 3 
    // 1 2 3
    // 1 2 3
    // 1 2 3

    //Char
    for(i = 0;i<n;i++){
        char ch = 'A';
        for(j=0;j<n;j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    //output
    // A B C D
    // A B C D
    // A B C D
    // A B C D

    //Triangle Problem
    for(i = 0;i<n;i++){
        for(j = 0;j < i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    //Output
    // *
    // **
    // ***
    // ****
    for(i = 0;i<n;i++){
        for(j = 0;j<i+1;j++){
            cout << (i+1);
        }
        cout << endl;
    }
    //1
    // 22
    // 333
    // 4444
    char chr = 'A';
    for(i = 0;i<n;i++){
        for(j = 0;j<i+1;j++){
            cout << chr;
        }
        chr++;
        cout << endl;
    }
    // A
    // BB
    // CCC
    // DDDD
    for(i = 0; i < n; i++){
        for(j = 1; j <= i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    
    //Reverse triangle pattern.
    for(i = 0;i < n-1; i++){
        for(j = i+1; j>0;j--){
            cout << j << " ";
        }
        cout << endl;
    }
    // 1
    // 2 1
    // 3 2 1

    //Floyd's triangle pattern
    int num = 1;
    for(i = 0; i<n; i++){
        for(j = 0;j<i+1;j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10
     
    //Inverted triangle pattern
    for(i = 0; i<n;i++){
        //spaces print
        for(j = 0;j <i;j++){
            cout << " ";
        }
        //numbers print
        for(j = 0;j < n-i; j++){
            cout << (i+1);
        }
        cout << endl;
    }
// 1111
//  222
//   33
//    4
    //Chars
    char ch = 'A';
    for(i = 0; i<n;i++){
        //spaces print
        for(j = 0;j <i;j++){
            cout << " ";
        }
        //characters print
        for(j = 0;j < n-i; j++){
            cout << ch;
        }
        cout << endl;
        ch++;
    }
// AAAA
//  BBB
//   CC
//    D

    //Pyramid Pattern
    //divide the pattern into two parts
    for(i = 0; i < n; i++){
        //spaces : n-i-1
        for(j = 0;j < n-i-1;j++){
            cout << " ";
        }
        //nums1 : i+1
        for(j = 1; j <= i+1;j++){
            cout << j;
        }
        //nums2 : backwards loop
        for(j = i;j > 0;j--){
            cout << j;
        }
        cout << endl;
    }
//    1
//   121
//  12321
// 1234321

    //Hollow diamond pattern
    for(int i = 0; i < n; i++){
        //spaces
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            for(int j = 0; j < 2 * i - 1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n - 2; i >= 0; i--){
        //spaces
        for(int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            for(int j = 0; j < 2 * i - 1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

    return 0;
}