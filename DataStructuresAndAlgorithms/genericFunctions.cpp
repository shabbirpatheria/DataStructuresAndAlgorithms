//
//  genericFunctions.cpp
//  DataStructuresAndAlgorithms
//
//  Created by Shabbir Patheria on 09/05/22.
//

#include "genericFunctions.hpp"
#include<iostream>
using namespace std;
void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void printArray(int arr[], int n){
    cout << "Elements of the array are: ";
    for(int i =0; i<n; i++){
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void printSet(int a, int b){
    cout << "(" << a << "," << b << ")";
}

void printVector(vector<int> a){
    for(auto i:a){
        cout << i << ", ";
    }
    cout << endl;
}
