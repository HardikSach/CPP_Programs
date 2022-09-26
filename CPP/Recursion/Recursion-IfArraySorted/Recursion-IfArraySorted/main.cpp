//
//  main.cpp
//  Recursion-IfArraySorted
//
//  Created by Amit Sachdeva on 28/08/22.
//

#include <iostream>
using namespace std;

bool ifSorted(int n, int arr[]) {
    if (n==1){
        return true;
    }
    
    bool restArray = ifSorted(n-1, arr+1);
    return (arr[0]<arr[1] && restArray);
}

int main() {
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter numbers in the array: ";
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    if(ifSorted(n, arr)==1)
        cout<<"Array is sorted"<<endl;
    else
        cout<<"Array is not sorted"<<endl;
    
    return 0;
}
