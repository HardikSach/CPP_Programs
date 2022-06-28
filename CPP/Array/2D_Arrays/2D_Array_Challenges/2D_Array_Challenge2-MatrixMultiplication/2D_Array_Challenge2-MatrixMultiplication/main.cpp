//
//  main.cpp
//  2D_Array_Challenge2-MatrixMultiplication
//
//  Created by Amit Sachdeva on 28/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    int array1[n1][n2];
    int array2[n2][n3];
    int ansArray[n1][n3];
    
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n2; j++) {
            cin>>array1[i][j];
        }
    }
    
    for (int i=0; i<n2; i++) {
        for (int j=0; j<n3; j++) {
            cin>>array2[i][j];
        }
    }
    
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n3; j++) {
            ansArray[i][j] = 0;
        }
    }
    
    cout << endl;
    
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n2; j++) {
            for (int k=0; k<n3; k++) {
                ansArray[i][k] += array1[i][j] * array2[j][k];
            }
        }
    }
    
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n3; j++) {
            cout << ansArray[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
