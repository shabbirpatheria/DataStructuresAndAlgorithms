#include<iostream>
#include "genericFunctions.hpp"
using namespace std;
void countingSort(int a[], int n){
    //largest element
    int largest = 0;
    for(int i = 0; i<n; i++){
        largest = max(largest, a[n]);
    }
    //Create a count array/vector
    vector<int> freq(largest+1,0);
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    
    //Put back the elements
    int j = 0;
    for(int i=0; i<largest; i++){
        while(freq[i] > 0){
            a[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main(){
    int arr[] = {2,3,1,6,5,4,9,7,8};
    int n = sizeof(arr)/sizeof(int);
    countingSort(arr,n);
    printArray(arr, n);
}
