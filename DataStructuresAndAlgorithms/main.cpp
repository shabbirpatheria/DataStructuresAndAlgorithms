#include <iostream>
#include "genericFunctions.hpp"
using namespace std;


//Selection Sort
void selectionSort(int arr[],int n){
    for(int i =0; i<n; i++){
        int minimum = INT_MAX;
        for(int j = i; j<n; j++){
            if(arr[j] < minimum){
                minimum = arr[j];
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    int arr[] = {5, 3, 1, 9, 8, 2, 4, 6,7};
    int N = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, N);
    cout <<"Sorted array: \n";
    printArray(arr, N);
    return 0;
}
