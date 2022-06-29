//
//  main.cpp
//  2D_Array_Challenge4-CheckPalindrome
//
//  Created by Amit Sachdeva on 29/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
//    check palindrome
    
    int n;
    cin>>n;
    
    char array[n+1];
    cin>>array;
    
    bool check = 1;
    
    for (int i=0; i<n; i++) {
        if (array[i] != array[n-1-i]) {
            check = 0;
            break;
        }
    }
    
    if (check == 1) {
        cout << array << " is a palindrome" << endl;
    }
    else {
        cout << array << " is not a palindrome" << endl;
    }
    
    return 0;
}
