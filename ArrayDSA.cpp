#include <iostream>
using namespace std;

void reverseArray(int arr[], int sz){
    int start = 0, end = sz-1;

    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int sum(int arr[], int sz){
    int sum = 0;
    for(int i = 0;i < sz;i++){
        sum += arr[i];    
    }
    return sum;
}

void swapMinMax(int arr[], int sz){
    // determine the smallest and the largest in the array.
    if (sz == 0) return;
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < sz; i++) {
        if (arr[i] < arr[minIndex]) minIndex = i;
        if (arr[i] > arr[maxIndex]) maxIndex = i;
    }
    
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

}

int product(int arr[], int sz){
    int product = 1;
    for(int i = 0;i < sz;i++){
        product *= arr[i];    
    }
    return product;
}

void concatenateArray(int arr1[], int arr2[], int size1, int size2){
    int new_arr[size1+size2];
    for(int i = 0;i < size1;i++){
        new_arr[i] = arr1[i];
    }
    for(int i = size1; i < size1 + size2; i++){
        new_arr[i] = arr2[i];
    }
}

int main(){
    //Array reverse using two pointer method...
    int arr[] = {4,23,45,6,7,8,9,1,2,76,3,4,5};
    int sz = sizeof(arr) / sizeof(arr[0]);

    cout << "The array sum is: " << sum(arr,sz) << endl;
    cout << "The array product is: " << product(arr,sz) << endl;
    swapMinMax(arr,sz);
    for(int i = 0;i<sz;i++){
        cout << "The swapped array is: " << arr[i] << endl;
    }
    reverseArray(arr,sz);

    for(int i = 0; i<sz; i++){
        cout << arr[i] << endl;
    }

    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {7,8,9,10};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int new_arr[size1 + size2];
    concatenateArray(arr1, arr2, size1, size2);
    for(int i = 0; i < size1 + size2; i++){
        cout << new_arr[i] << " ";
    }
    cout << endl;

    return 0;
}