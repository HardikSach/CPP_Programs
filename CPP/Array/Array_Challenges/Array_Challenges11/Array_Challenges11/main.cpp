//
//  main.cpp
//  Array_Challenges11
//
//  Created by Amit Sachdeva on 27/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    int n,k;
    cin>>n>>k;
    
    int array[n];
    
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }
    
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            if ((array[i] + array[j]) == k) {
                cout<<k<<" is the sum of "<<array[i]<<" and "<<array[j]<<endl;
                
                return 0;
            }
        }
    }
    
    cout<<k<<" is not the sum of any elements of the array."<<endl;
    
    return 0;
}
