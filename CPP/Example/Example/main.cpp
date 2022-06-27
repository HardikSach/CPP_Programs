//
//  main.cpp
//  Example
//
//  Created by Amit Sachdeva on 18/06/22.
//

#include <iostream>
using namespace std;

void findSumPair(int array[], int n, int k);

int main() {
    
    int n,k;
    cout<<"Enter n = ";
    cin>>n;
    int array[n];
    
    cout<<"Enter array elements = ";
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    
    cout<<"Enter k = ";
    cin>>k;
    findSumPair(array, n, k);
    return 0;
}

void findSumPair(int array[], int n, int k)
{
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((array[i] + array[j]) == k)
            {
                flag = 1;
                cout<<"Pair "<<"("<<array[i]<<","<<array[j]<<")"<<" found!\n";
            }
        }
    }
    
    if(flag==1)
    {
        cout<<"Yes! there exist at least 2 elements in array whose sum is equal to given value "<<k<<endl;
    }
    else
    {
        cout<<"No two elements exist in the array whose sum is equal to given value "<<k<<endl;
    }
}
