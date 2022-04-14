#include <iostream>
using namespace std;

int main(){
    
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int A[n];
    //int A[n] = {0,2,3,4,5} will throw error
    for(int i = 0; i<n; i++){
        A[i] = i*i;
    }
    //4 Bytes for int
    cout << sizeof(A) << endl;
    
    for(int i =0; i< n; i++){
        cout << A[i] << " ";
    }
    cout << endl;
    
    //C++
    for(int x:A){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
