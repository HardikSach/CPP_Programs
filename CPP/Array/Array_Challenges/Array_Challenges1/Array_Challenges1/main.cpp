//
//  main.cpp
//  Array_Challenges1
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
    
    int maxNo = INT_MIN;
    
    for (int i=0; i<n; i++) {
        maxNo = max(maxNo,array[i]);
        cout<<maxNo<<" ";
    }
    
    cout<<endl;
    
    return 0;
}
