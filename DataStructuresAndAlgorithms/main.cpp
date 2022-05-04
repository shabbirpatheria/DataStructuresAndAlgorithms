#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,9,6,3,7,2,9,7};
    int n = sizeof(arr)/sizeof(int);
    
    int key;
    cin >> key;
    if(linearSearch(arr, n, key) != -1){
        cout << "Key : " << key << " found at position: " << linearSearch(arr, n, key) << "." << endl;
    }else{
        cout << "Key: " << key << ", not found." << endl;
    }

}
