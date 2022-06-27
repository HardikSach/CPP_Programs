//
//  main.cpp
//  Array_BubbleSort
//
//  Created by Amit Sachdeva on 19/06/22.
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
    
    int counter = 1;
    
    while (counter < n-1) {
        for (int i=0; i<n-counter; i++) {
            if (array[i] > array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        counter++;
    }
    
    for (int i=0; i<n; i++) {
        cout<<array[i]<<" ";
    }
    
    cout<<endl;
    
    return 0;
}
