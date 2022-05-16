#include<iostream>
#include "genericFunctions.hpp"
using namespace std;

void bubbleSort(int a[], int n){
    for(int i = 1; i <= n-1; i++){
        for(int j = 0; j <= n-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {2,4,1,3,5,9,7,6,0};
    int size = sizeof(arr)/sizeof(int);
    bubbleSort(arr, size);
    printArray(arr,size);
}
