#include <iostream>
#include "genericFunctions.hpp"

using namespace std;
//Prefix Sum Approach

int largestSubarraySum(int arr[], int n){
    int cs = 0;
    int largestSum =0;
    
    for(int i =0; i<n; i++){
        cs += arr[i];
        if(cs < 0){
            cs=0;
        }
        largestSum = max(cs,largestSum);
    }
    
    return largestSum;
}



int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout << "Largest Sum: " << largestSubarraySum(arr, n) << endl;
}
