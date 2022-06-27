//
//  main.cpp
//  Functions2
//
//  Created by Amit Sachdeva on 17/06/22.
//

#include <iostream>
using namespace std;

void fib(int n) {
    int t1=0;
    int t2=1;
    int nextTerm;
    
    for(int i=1; i<=n; i++) {
        cout<<t1<<" ";
        
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    cout<<endl;
    
    return;
}

int main() {
    
    int n;
    cin>>n;
    
    fib(n);
    
    return 0;
}
