//
//  main.cpp
//  2D_Array_Challenge1-MatrixTranspose
//
//  Created by Amit Sachdeva on 28/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int array[n][n];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> array[i][j];
        }
    }
    
    cout << endl;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << array[j][i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
