//
//  main.cpp
//  Function7
//
//  Created by Amit Sachdeva on 17/06/22.
//

#include <iostream>
using namespace std;

bool check(int x, int y, int z) {
    int a = max(x, max(y,z));
    int b,c;
    
    if(a==x) {
        b = y;
        c = z;
    } else if(a==y) {
        b = x;
        c = z;
    } else {
        b = x;
        c = y;
    }
    
    if(a*a == b*b + c*c) {
        return true;
    }
    
    return false;
}

int main() {
    
    int x,y,z;
    cin>>x>>y>>z;
    
    if(check(x,y,z)==true) {
        cout<<"This is a Pythagorean Triplet"<<endl;
    } else {
        cout<<"This is not a Pythagorean Triplet"<<endl;
    }
    
    return 0;
}
