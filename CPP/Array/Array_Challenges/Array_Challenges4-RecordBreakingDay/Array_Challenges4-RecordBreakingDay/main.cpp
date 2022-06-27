//
//  main.cpp
//  Array_Challenges4-RecordBreakingDay
//
//  Created by Amit Sachdeva on 24/06/22.
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
    
    int ans = 0;
    int mx = 0;
    
    for (int i=0; i<n; i++) {
        for (int j=1; j<i; j++) {
            mx = max(array[i], array[i-j]);
        }
            
        if (array[i] == mx) {
            if (array[i+1]) {
                if (array[i] > array[i+1]) {
                    ans += 1;
                }
            }
        }
    }
    
    cout<<"No. of Record Breaking Days = "<<ans<<endl;
    
    return 0;
}
