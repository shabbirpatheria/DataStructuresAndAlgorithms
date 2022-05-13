#include <iostream>
#include "genericFunctions.hpp"
#include<bits/stdc++.h>

using namespace std;

int main(){
    //When size of vector increases,
    //it creates a new vector 2x the size and copies all the data
    //from the previos copy and then it'll be destroyed
    
    
    vector<int> arr = {1,2,3,5,7,8,12,23};
    cout << "Capacity: " << arr.capacity() << endl;
    //Push_Back O(1)
    arr.push_back(15);
    //Number of the elements
    cout << "Size: " <<  arr.size() << endl;
    //Capacity of the vector
    cout << "Capacity: " <<  arr.capacity() << endl;
    //Print all the elements
    printVector(arr);
    
    arr.pop_back();
    printVector(arr);
    cout << "Capacity: " <<  arr.capacity() << endl;
    
    //Fill Constructor
    vector<int> a0(10,7);
    printVector(a0);
}
