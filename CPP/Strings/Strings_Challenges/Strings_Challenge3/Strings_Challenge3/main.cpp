//
//  main.cpp
//  Strings_Challenge3
//
//  Created by Amit Sachdeva on 30/06/22.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
//    Longest time a character is being repeated in a string.
    
    string s;
    cin>>s;
    
    int freq[26];
    char ans = 'a';
    int maxF = 0;
    
    for (int i=0; i<26; i++)
    {
        freq[i] = 0;
    }
    
    for (int i=0; i<s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    
    for (int i=0; i<s.size(); i++)
    {
        if (freq[i] >= maxF)
        {
            maxF = freq[i];
            ans = i + 'a';
            cout << ans << " is repeated " << maxF << " times." << endl;
        }
    }
    
    return 0;
}
