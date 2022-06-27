//
//  main.cpp
//  Array_Challenges6
//
//  Created by Amit Sachdeva on 25/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    int n,s;
    cin>>n>>s;
    
    int array[n];
    
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }
    
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    
    while (j<n && sum+array[j] <= s) {
        sum += array[j];
        j++;
    }
    
    if (sum == s) {
        cout<<i+1<<" "<<j<<endl;
        
        return 0;
    }
    
    while (j<n) {
        sum += array[j];
        
        while (sum > s) {
            sum -= array[i];
            i++;
        }
        
        if (sum == s) {
            st = i+1;
            en = j+1;
            break;
        }
    }
    
    cout<<st<<"-"<<en<<endl;
    
    return 0;
}
