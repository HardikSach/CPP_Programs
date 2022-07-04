//
//  main.cpp
//  BitManipulation_Challenge4
//
//  Created by Amit Sachdeva on 01/07/22.
//

#include <iostream>
using namespace std;

int uniqueNumber(int n, int array[]) {
    int xorsum = 0;
    
    for (int i=0; i<n; i++) {
        xorsum = xorsum ^ array[i];
    }
    
    return xorsum;
}

int main() {
    
    int n;
    cin >> n;
    
    int array[n];
    
    for (int i=0; i<n; i++) {
        cin >> array[i];
    }
    
    cout << uniqueNumber(n, array) << endl;
    
    return 0;
}
