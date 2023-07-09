//
//  main.cpp
//  Recursion-ArraySorted1
//
//  Created by Amit Sachdeva on 27/09/22.
//

#include <iostream>
using namespace std;

void decreasing(int n){
    if(n==0){
        return;
    }
    
    cout<<n<<" ";
    
    decreasing(n-1);
    
    if(n==1){
        cout<<endl;
    }
}

int main() {
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    decreasing(n);
    
    return 0;
}
