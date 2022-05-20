#include <iostream>
#include "genericFunctions.hpp"
using namespace std;

//Insertion Sort

void insertionSort(int arr[], int n){
    int key;
    for(int i =1; i <n; i++){
        key = arr[i];
        for(int j = i-1; j >=0; j--){
            if(key > arr[j]){
                arr[j+1] = key;
                break;
            }else{
                arr[j+1] = arr[j];
                arr[j] = key;
            }
        }
    }
}


int main()
{
    int arr[] = {5, 3, 1, 9, 8, 2, 4, 7};
    int N = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, N);
    cout <<"Sorted array: \n";
    printArray(arr, N);
    return 0;
}
