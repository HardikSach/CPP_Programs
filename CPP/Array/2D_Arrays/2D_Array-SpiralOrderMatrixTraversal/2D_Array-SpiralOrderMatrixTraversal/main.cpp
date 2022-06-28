//
//  main.cpp
//  2D_Array-SpiralOrderMatrixTraversal
//
//  Created by Amit Sachdeva on 27/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    int n,m;
    cin>>n>>m;
    
    int array[n][m];
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>array[i][j];
        }
    }
    
//    spral order print
    
    int rowStart =  0, rowEnd = n-1, columnStart = 0, columnEnd = m-1;
    
    while (rowStart <= rowEnd && columnStart <= columnEnd) {
//        for rowStart
        
        for (int col = columnStart; col <= columnEnd; col++) {
            cout << array[rowStart][col] << " ";
        }
        
        rowStart++;
        
//        for columnEnd
        
        for (int row = rowStart; row <= rowEnd; row++) {
            cout << array[row][columnEnd] << " ";
        }
        
        columnEnd--;
        
//        for rowEnd
        
        for (int col = columnEnd; col >= columnStart; col--) {
            cout << array[rowEnd][col] << " ";
        }
        
        rowEnd--;
        
//        for columnStart
        
        for (int row = rowEnd; row >= rowStart; row--) {
            cout << array[row][columnStart] << " ";
        }
        
        columnStart++;
    }
    
    cout << endl;
    
    return 0;
}
