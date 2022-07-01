//
//  main.cpp
//  BitManipulation_Challenge2
//
//  Created by Amit Sachdeva on 01/07/22.
//

#include <iostream>
using namespace std;

int numberOfOnesInBinary(int n) {
    int count = 0;
    while (n) {
        n = n & n-1;
        count++;
    }
    
    return count;
}

int main() {
    
//    Program to count the number of ones in a binary representation.
    
    int n;
    cin >> n;
    
    cout << numberOfOnesInBinary(n) << endl;
    
    return 0;
}
