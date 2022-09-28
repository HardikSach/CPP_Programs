//
//  main.cpp
//  Recursion-ArraySorted2
//
//  Created by Amit Sachdeva on 27/09/22.
//

#include <iostream>
using namespace std;

void increasing(int n){
    if(n==0){
        return;
    }
    
    increasing(n-1);
    cout<<n<<" ";
}

int main() {
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    increasing(n);
    cout<<endl;
    
    return 0;
}
