//
//  main.cpp
//  Recursion-ReverseString
//
//  Created by Amit Sachdeva on 08/06/23.
//

#include <iostream>
using namespace std;

void reverseString(string s){
    if (s.length()==0){
        return;
    }
    
    string ros = s.substr(1);
    reverseString(ros);
    cout<<s[0];
}

int main() {
    
    string s;
    cout<<"Enter word: ";
    cin>>s;
    
    reverseString(s);
    cout<<endl;
    
    return 0;
}
