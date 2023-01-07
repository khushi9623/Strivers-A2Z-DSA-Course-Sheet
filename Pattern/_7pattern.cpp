
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        //row
        for(int i=0; i<n; i++) {
            //space 
            for(int space1=0; space1<(n-i-1); space1++) {
                cout<<" ";
            }
            // coloumn
            for(int j=0; j<(2*i)+1; j++) {
                cout<<"*";
            }
            //space
            for(int space2=0; space2<(n-i-1); space2++) {
                cout<<" ";
            }
            
            cout<<endl;
           }
    }
};
