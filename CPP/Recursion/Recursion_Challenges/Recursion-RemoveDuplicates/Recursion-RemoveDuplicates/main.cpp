//
//  main.cpp
//  Recursion-RemoveDuplicates
//
//  Created by Amit Sachdeva on 09/06/23.
//

#include <iostream>
using namespace std;

void removeDuplicates(string s){
    if(s.length()==0){
        return;
    }
    
    if(s[0]==s[1]){
        removeDuplicates(s.substr(1));
    }
    else{
        cout<<s[0];
        removeDuplicates(s.substr(1));
    }
    
}

int main() {
    
    string s;
    cout<<"Enter word: ";
    cin>>s;
    
    removeDuplicates(s);
    cout<<endl;
    
    return 0;
}
