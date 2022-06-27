//
//  main.cpp
//  Array_LinearSearch
//
//  Created by Amit Sachdeva on 19/06/22.
//

#include <iostream>
using namespace std;

int linearSearch (int array[], int n, int key) {
    for (int i=0; i<n; i++) {
        if (array[i]==key) {
            return i;
        }
    }
    
    return -1;
}

int main() {
    
    int n;
    cin>>n;
    
    int array[n];
    
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }
    
    int key;
    cin>>key;
    
    cout<<linearSearch(array, n, key)<<endl;
    
    return 0;
}
