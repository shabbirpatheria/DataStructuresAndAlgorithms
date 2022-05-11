#include <iostream>
#include "genericFunctions.hpp"

using namespace std;

int largestSubarraySum(int arr[], int n){
    
    int largestSum = -1;
    for(int i =0 ; i<n; i++){
        for(int j =i; j<n; j++){
            
            int subarraySum = 0;
            //Gives all the subarray sets
            for(int k = i; k<=j ; k++){
                //cout << arr[k] << ", ";
                subarraySum += arr[k];
            }
            
            largestSum = max(subarraySum,largestSum);
        }
    }
    return largestSum;
}



int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout << "Largest Sum: " << largestSubarraySum(arr, n) << endl;
}
