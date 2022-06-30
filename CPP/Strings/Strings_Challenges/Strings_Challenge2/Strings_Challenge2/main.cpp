//
//  main.cpp
//  Strings_Challenge2
//
//  Created by Amit Sachdeva on 30/06/22.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
//    Form the biggest number from the numeric string
    
    string n;
    cout << "Give a number: ";
    cin >> n;
    
    sort(n.begin(), n.end(), greater<char>());
    
    cout << "Biggest number is possible is: " << n << endl;
    
    return 0;
}
