//
//  main.cpp
//  2D_Array_Challenge5-LongestWordInASentence
//
//  Created by Amit Sachdeva on 29/06/22.
//

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    cin.ignore();
    
    char array[n+1];
    
    cin.getline(array, n);
    cin.ignore();
    
    int i = 0, currentLength = 0, maxLength = 0;
    
    while (1)
    {
        if (array[i] == ' ' || array[i] == '\0')
        {
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
            
            currentLength = 0;
        }
        else
        {
        currentLength++;
        }
        
        if (array[i] == '\0')
        {
            break;
        }
    }
    
    cout << maxLength << endl;
    
    return 0;
}
