//
//  main.cpp
//  Prime
//
//  Created by Amit Sachdeva on 16/06/22.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    bool flag=0;
    int i;
    for(i=2; i<sqrt(n); i++) {
        if(n%i==0) {
            cout<<"Non-prime"<<endl;
            flag=1;
            break;
        }
    }
    
    if(flag==0) {
        cout<<"Prime"<<endl;
    }
    
    return 0;
}
