//
//  main.cpp
//  InclusiveExclusivePrincipal-GCD
//
//  Created by Amit Sachdeva on 18/07/22.
//

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b!=0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    
    int a,b;
    cout<<"Enter a & b: "<<endl;
    cin>>a>>b;
    
    cout<<gcd(a, b)<<endl;
    
    return 0;
}
