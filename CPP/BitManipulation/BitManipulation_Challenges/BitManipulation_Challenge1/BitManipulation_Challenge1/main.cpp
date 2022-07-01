//
//  main.cpp
//  BitManipulation_Challenge1
//
//  Created by Amit Sachdeva on 30/06/22.
//

#include <iostream>
using namespace std;

bool checkPower2(int n) {
    return (n && !(n & n-1));
}

int main() {
    
    int n;
    cin>>n;
    
    if (checkPower2(n)) {
        cout << n << " is a power of 2." << endl;
    }
    else {
        cout << n << " is not a power of 2." << endl;
    }
    
    return 0;
}
