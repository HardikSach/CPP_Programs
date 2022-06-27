//
//  main.cpp
//  Array_Challenges2
//
//  Created by Amit Sachdeva on 22/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int array[n];
    
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }
    
    int current = 0;
    
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            current += array[j];
            
            cout<<current<<" ";
        }
    }
    
    cout<<endl;
    
    return 0;
}
