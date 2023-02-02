//
//  main.cpp
//  Recursion_Introduction
//
//  Created by Amit Sachdeva on 19/08/22.
//

#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    
    int prevFactorial = factorial(n-1);
    return n * prevFactorial;
}

int fibonacci(int n) {
    
    if(n==0)
        return 0;
    
    if(n==1)
        return 1;
    
    return (fibonacci(n-1) + fibonacci(n-2));
}


int main() {
    
    int n;
    cout<<"Enter n: ";
    cin>>n;
    
    cout<<fibonacci(n)<<endl;
    
    cout<<factorial(n)<<endl;
    
    return 0;
}
