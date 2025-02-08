#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){ //Worst case: O(n^2) Best Case:n^2 Avg Case:n^2
    for(int i = 0;i< n-1;i++){
        for(int j = 0;j < n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void optimizedBubbleSort(int arr[],int n){ //Worst case: O(n^2) Best Case:n Avg Case:n^2
    int i,j;
    for(i = 0;i < n-1;i++){
        bool flag = true;
        for(j = 0;j < n-i-1;j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j], arr[j+1]);
                flag = false;
            }
        }
        if(flag == true) break;
    }
}

void selectionSort(int arr[],int n){ //O(n^2)
    for(int i = 0;i < n-2;i++){
        int min = i;
        for(int j = 0;j = n-1;j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        if (min != i){
            swap(arr[min],arr[i]);
        }
    }
}

void insertionSort(int arr[],int n){ // O(n^2)
    int i,j,temp;
    for(i = 1;i < n-1;i++){
        temp = arr[i];
        j = 1;
        while(j > 0 && arr[j-1] > temp){
            arr[j] = arr[j+1];
            j = j-1;
        }
        arr[j] = temp;
    }
}

void printArray(int arr[],int n){
    for(int i = 0;i< n-1;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {4,3,2,43,5,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr,size);
    printArray(arr,size);

    return 0;
}