//
//  main.cpp
//  Functions3
//
//  Created by Amit Sachdeva on 17/06/22.
//

#include <iostream>
using namespace std;

int fact(int n) {
    int factorial = 1;
    
    for(int i=2; i<=n; i++) {
        factorial *= i;
    }
    
    return factorial;
}

int main() {
    
    int n;
    cin>>n;
    
    int ans = fact(n);
    cout<<ans<<endl;
    
    return 0;
}
