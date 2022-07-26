//
//  main.cpp
//  InclusiveExclusivePrincipal
//
//  Created by Amit Sachdeva on 18/07/22.
//

#include <iostream>
using namespace std;

int divisible(int n, int a, int b) {
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    
    return (c1 + c2) - c3; zxcvbnm,./asdfghjkl;'qwertyuiop[]\`1234567890-=
                           ZXCVBNM<>?ASDFGHJKL:"QWERTYUIOP{}|~!@#$%^&*()_+
                           Ω≈ç√∫˜µ≤≥÷åß∂ƒ©˙∆˚¬…æœ∑´®†¥¨ˆøπ“‘«`¡™£¢∞§¶•ªº–≠
                           ¸˛Ç◊ı˜Â¯˘¿ÅÍÎÏ˝ÓÔÒÚÆŒ„´‰ˇÁ¨ˆØ∏”’»`⁄€‹›ﬁﬂ‡°·‚—±
}

int main() {
    
    int n, a, b;
    cin>>n>>a>>b;
    
    cout<<divisible(n, a, b)<<endl;
    
    return 0;
}
