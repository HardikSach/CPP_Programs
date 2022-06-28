//
//  main.cpp
//  2D_Array_Challenge3-MatrixSearch
//
//  Created by Amit Sachdeva on 28/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    int n,m;
    cin>>n>>m;
    
    int array[n][m];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> array[i][j];
        }
    }
    
    int s;
    cin>>s;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (array[i][j] == s) {
                cout << "Element found!" << endl;
                
                return 0;
            }
        }
    }
    
    cout << "Element not found!" << endl;
    
    return 0;
}
