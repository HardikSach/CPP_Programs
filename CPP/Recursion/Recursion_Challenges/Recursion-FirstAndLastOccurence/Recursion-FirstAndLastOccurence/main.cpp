//
//  main.cpp
//  Recursion-FirstAndLastOccurence
//
//  Created by Amit Sachdeva on 28/09/22.
//

#include <iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key){
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    
    return firstocc(arr, n, i+1, key);
}

int main() {
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter elements of arr: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    return 0;
}
