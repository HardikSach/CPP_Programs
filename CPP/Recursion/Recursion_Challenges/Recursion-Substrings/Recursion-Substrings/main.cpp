//
//  main.cpp
//  Recursion-Substrings
//
//  Created by Amit Sachdeva on 09/06/23.
//

#include <iostream>
using namespace std;

void substring(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    
    char ch = s[0];
    string ros = s.substr(1);
    
    substring(ros,ans);
    substring(ros,ans+ch);
}

int main() {
    
    string s;
    cout<<"Enter word: ";
    cin>>s;
    
    substring(s,"");
    
    return 0;
}
