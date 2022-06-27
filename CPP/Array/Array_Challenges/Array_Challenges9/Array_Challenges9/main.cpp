//
//  main.cpp
//  Array_Challenges9
//
//  Created by Amit Sachdeva on 27/06/22.
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
    int maxNo = INT_MIN;
    
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            current += array[j];
            
            maxNo = max(maxNo, current);
        }
    }
    
    cout<<maxNo<<endl;
    
    return 0;
}
