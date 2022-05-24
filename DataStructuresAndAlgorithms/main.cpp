#include<iostream>
#include "genericFunctions.hpp"
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {3,5,2,1,6,9,8,7};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n,greater<int>());
    //compare is NOT a function call, instead passing a function as a perimeter
    //greater<int>() is the change.
    
    cout << "Sorted Array (in Reverse): " << endl;
    printArray(arr,n);
    
    reverse(arr, arr+n);
    cout << "Reversed Array: " << endl;
    printArray(arr, n);
    
    return 0;
}

