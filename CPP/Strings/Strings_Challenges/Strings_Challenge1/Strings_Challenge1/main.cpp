//
//  main.cpp
//  Strings_Challenge1
//
//  Created by Amit Sachdeva on 30/06/22.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    string s;
    cin>>s;
    
//    convert into upper case
    
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
    }
    
    cout << "Upper case: " << s << endl;
    
//    convert into lower case
    
    for (int i=0; i<s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    
    cout <<"Lower case: " << s << endl;
    
    return 0;
}
