#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void printTriangle(int n) {
        //rows
        for(int i=0; i<n; i++) {

            // column
            for(int j=0; j<=i; j++) {

                // print 
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
};



