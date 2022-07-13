//
//  main.cpp
//  SieveOfEratosthenes
//
//  Created by Amit Sachdeva on 08/07/22.
//

#include <iostream>
using namespace std;

//void SieveOfEratosthenes(int arr[], int n) {
//    for (int i=0; i<n; i++) {
//        if (arr[i] > 1) {
//            for (int j=n-1; j>=i*i; j--) {
//                if (arr[j] % i == 0) {
//                    int current = arr[j];
//
//                    while (arr[j] > current) {
//                        arr[j+1] = arr[j];
//                        j--;
//                    }
//
//                    arr[j] = arr[n-1];
//                    arr[n-1] = arr[j];
//
//                    n--;
//                }
//            }
//
//            for (int i=1; i<n; i++) {
//                int current = arr[i];
//                int j = i-1;
//
//                while (arr[j] > current && j>=0) {
//                    arr[j+1] = arr[j];
//                    j--;
//                }
//
//                arr[j+1] = current;
//            }
//
//            cout<<arr[i]<<" ";
//        }
//    }
//
//    cout<<endl;
//}

void SieveOfEratosthenes(int n) {
    int prime[n];
    
    for (int i=0; i<n; i++) {
        prime[i] = 0;
    }
    
    for (int i=2; i<=n; i++) {
        if (prime[i]==0) {
            for (int j=i*i; j<=n; j+=i) {
                prime[j] = 1;
            }
        }
    }
    
    for (int i=2; i<=n; i++) {
        if (prime[i] == 0) {
            cout<<i<<" ";
        }
    }
    
    cout<<endl;
}

int main() {
    
    int n;
    cin>>n;
    
    SieveOfEratosthenes(n);
    
    return 0;
}
