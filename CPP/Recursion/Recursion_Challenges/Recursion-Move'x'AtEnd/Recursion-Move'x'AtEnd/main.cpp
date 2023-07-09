//
//  main.cpp
//  Recursion-Move'x'AtEnd
//
//  Created by Amit Sachdeva on 09/06/23.
//

#include <iostream>
using namespace std;

void movex(string s){
    if(s.length()==0){
        return;
    }
    
    int a = 0;
    if(s[0]=='x'){
        a++;
        movex(s.substr(1));
    }
    else{
        cout<<s[0];
        movex(s.substr(1));
    }
    for(int i=a; i>0; i--){
        cout<<"x";
    }
}

int main() {
    
    string s;
    cout<<"Enter word: ";
    cin>>s;
    
    movex(s);
    cout<<endl;
    
    return 0;
}
