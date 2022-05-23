#include<iostream>
#include "genericFunctions.hpp"
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    cout << "Comparing " << a << " and " << b << "." << endl;
    return a>b;
}

int main(){
    int arr[] = {3,5,2,1,6,9,8,7};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n,compare);
    //compare is NOT a function call, instead passing a function as a perimeter
    //Can also use 'greater<int>()' instead of compare
    
    cout << "Sorted Array (in Reverse): " << endl;
    printArray(arr,n);
    
    reverse(arr, arr+n);
    cout << "Reversed Array: " << endl;
    printArray(arr, n);
    
    return 0;
}

