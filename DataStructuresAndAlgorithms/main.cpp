#include <iostream>
#include "genericFunctions.hpp"

using namespace std;

void reverseArray(int arr[], int n){
    for(int i =0 ; i < n/2 ; i++){
        swap(arr[i],arr[n-i-1]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr, n);
    printArray(arr, n);
}
