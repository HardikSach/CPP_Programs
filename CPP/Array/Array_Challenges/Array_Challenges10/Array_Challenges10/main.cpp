//
//  main.cpp
//  Array_Challenges10
//
//  Created by Amit Sachdeva on 27/06/22.
//

#include <iostream>
using namespace std;

int kadane(int array[], int n) {
    int currentSum = 0;
    int maxSum = INT_MIN;
    
    for (int i=0; i<n; i++) {
        currentSum += array[i];
        
        if (currentSum < 0) {
            currentSum = 0;
        }
        
        maxSum = max(maxSum, currentSum);
    }
    
    return maxSum;
}

int main() {
    
    int n;
    cin>>n;
    
    int array[n];
    
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }
    
    int wrapsum;
    int nonwrapsum;
    
    nonwrapsum = kadane(array, n);
    
    int totalSum = 0;
    
    for (int i=0; i<n; i++) {
        totalSum += array[i];
        
        array[i] = -array[i];
    }
    
    wrapsum = totalSum + kadane(array, n);
    
    cout<<max(wrapsum, nonwrapsum)<<endl;
    
    return 0;
}
