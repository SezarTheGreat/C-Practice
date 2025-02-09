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

void mergeArray(int arr[], int start, int mid, int end) {
    int l1 = mid - start + 1;
    int l2 = end - mid;
    int L[l1], R[l2]; //create 2 arrays that are l1 and l2 
    for (int i = 0; i < l1; i++) {
        L[i] = arr[start + i];
    }
    // insert the left hand sorted array to a L array.
    for (int j = 0; j < l2; j++) {
        R[j] = arr[mid + 1 + j];
    }
    // insert the right hand sorted array to a R array

    int i = 0, j = 0, k = start;

    // merges the sorted array after comparing the arrays elements of the
    while (i < l1 && j < l2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // inserts any remaining elements in the merged array...
    while (i < l1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < l2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid); // Left hand array
        mergeSort(arr, mid + 1, end); // Right hand array
        mergeArray(arr, start, mid, end);
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