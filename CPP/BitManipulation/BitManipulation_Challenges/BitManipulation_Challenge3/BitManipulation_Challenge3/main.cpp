//
//  main.cpp
//  BitManipulation_Challenge3
//
//  Created by Amit Sachdeva on 01/07/22.
//

#include <iostream>
using namespace std;

void allSubsets(int n, int array[]) {
    for (int i=0; i<(1 << n); i++) {
        for (int j=0; j<n; j++) {
            if (i & (1 << j)) {
                cout << array[j] << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    
//    Program to generate all possible subsets of a set.
    
    int n;
    cin >> n;
    
    int array[n];
    
    for (int i=0; i<n; i++) {
        cin >> array[i];
    }
    
    allSubsets(n, array);
    
    return 0;
}
