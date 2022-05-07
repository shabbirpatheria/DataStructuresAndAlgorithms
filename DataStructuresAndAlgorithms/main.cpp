#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            e = mid-1;
        }else if(arr[mid] < key){
            s = mid+1;
        }
    }
    
    return -1;
}
int main(){
    int arr[] = {1,3,5,9,13,16,17,22,27,29};
    int key;
    cout << "Enter the key: ";
    cin >> key;
    int ans = binarySearch(arr, 10, key);
    if(ans != -1){
        cout << "Key found at position: " << binarySearch(arr, 10, key) << endl;
    }else{
        cout << "Key Not Found" << endl;
    }
    
}
