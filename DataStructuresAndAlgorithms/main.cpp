#include<iostream>
#include<cstring>
#include "genericFunctions.hpp"
using namespace std;
int main(){
    char a1[100];
    char a2[100] = {'a','b','c'}; //Wrong
    char a3[100] = {'a','b','c','\0'}; //Right
    char a4[100] = "abc";
    
    char a[] = {'a','b','c','d','e','\0'}; //Always do this
    cout << a << endl;
    
    char b[] = "abcdef";
    cout << b << endl;
    
    cout << "Strlen(): " << strlen(a) << endl;
    cout << "Sizeof(): " << sizeof(a) << endl;
    //Because of null character
    
    char c[100];
    cin >> c;
    cout << "Input String: " << c << endl;
}
