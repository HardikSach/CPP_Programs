//
//  main.cpp
//  BitManipualtion_Challenge6
//
//  Created by Amit Sachdeva on 07/07/22.
//

#include <iostream>
using namespace std;

bool getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos) {
    return (n | (1 << pos));
}

int unique(int arr[], int n) {
    
//    Program to find a unique number in an array where all numbers except one, are present twice. 
    
    int result = 0;
    
    for (int i=0; i<64; i++) {
        int sum=0;
        
        for (int j=0; j<n; j++) {
            if (getBit(arr[j], i)) {
                sum++;
            }
        }
        
        if (sum%3 != 0) {
            result = setBit(result, i);
        }
    }
    
    return result;
}

int main() {
    
    int n;
    cin>>n;
    
    int arr[n];
    
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    cout<<unique(arr, n)<<endl;
    
    return 0;
}
