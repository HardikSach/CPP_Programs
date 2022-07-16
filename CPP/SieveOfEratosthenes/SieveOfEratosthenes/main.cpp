//
//  main.cpp
//  SieveOfEratosthenes
//
//  Created by Amit Sachdeva on 08/07/22.
//

#include <iostream>
using namespace std;

void SieveOfEratosthenes(int n) {
    int prime[n];
    
    for (int i=0; i<n; i++) {
        prime[i] = 0;
    }
    
    for (int i=2; i<=n; i++) {
        if (prime[i]==0) {
            for (int j=i*i; j<=n; j+=i) {
                prime[j] = 1;
            }
        }
    }
    
    for (int i=2; i<=n; i++) {
        if (prime[i] == 0) {
            cout<<i<<" ";
        }
    }
    
    cout<<endl;
}

int main() {
    
    int n;
    cin>>n;
    
    SieveOfEratosthenes(n);
    
    return 0;
}
