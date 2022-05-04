#include<iostream>
using namespace std;

void printArray(int arr[]){
    //Since it is pass by reference, the size of the array should also be passed.
    //or use int* arr
    cout << "Size in function " << sizeof(arr) << endl;
    int n = sizeof(arr)/sizeof(int);
    arr[0] = 100;
    //Since it is pass by ref, both the outputs will change.
    for(int i =0; i<n; i++){
        cout << arr[i] << endl;
    }
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr);
    
    cout << "Size in main " << sizeof(arr) << endl;
    for(int i =0; i<n; i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}
