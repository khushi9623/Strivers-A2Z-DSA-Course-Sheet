
#include <bits/stdc++.h>

using namespace std;
class Solution{
public:
    void printTriangle(int n) {
        // there is symmetry in pattern
        // row 
        for(int i=0; i<n; i++) {
             // column
             for(int j =0; j<=i; j++) {
                 cout<<"*"<<" ";
             }
             cout<<endl;
        }
        for(int i1=0; i1<(n-1); i1++) {
            
            for(int j1=0; j1<(n-i1-1); j1++) {
                
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
        
    }
};
