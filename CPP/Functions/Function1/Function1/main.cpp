//
//  main.cpp
//  Function1
//
//  Created by Amit Sachdeva on 17/06/22.
//

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    int i;
    for(i=2; i<=sqrt(num); i++) {
        if(num%i==0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    
    int a,b;
    cin>>a>>b;
    
    int n=-1;
    for(int i=a; i<=b; i++) {
        if(isPrime(i)==true) {
            n+=1;
            cout<<i<<endl;
        }
    }
    cout<<"Number of prime nummbers between "<<a<<" and "<<b<<" are:\n";
    cout<<n<<endl;
    
    return 0;
}
