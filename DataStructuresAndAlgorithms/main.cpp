#include <iostream>
#include "genericFunctions.hpp"

using namespace std;

void printSubarrays(int arr[], int n){
    for(int i =0 ; i<n; i++){
        for(int j =i; j<n; j++){
            //Gives all the subarray sets
            for(int k = i; k<=j ; k++){
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(int);
    printSubarrays(arr, n);
}
