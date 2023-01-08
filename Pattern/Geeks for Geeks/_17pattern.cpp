
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // this pattern is pretty much similar to pattern 7 
        // we followed the pattern (space , alphabet, space)
        // row(i) start 0 to n;
        // there we found formula for space n-i-1;
        // for column range will be 0 to (2i+1);
        // for alphabet you will see that till (n/2)+1 increment
        // after the (n/2)+1 decrement 
        // for eg:- if n=5
        // A   B   C   B    A
        // ++  ++  --  --   --
        // this operation must be followed
        
        for(int i=0; i<n; i++) {
            
            // space 
            for(int space = 0; space <(n-i-1); space++) {
                cout<<" ";
            }
            //alphabet
            char ch = 'A';
            int breakpoint = (2*i+1)/2;
            for(int j =1; j<=((2*i)+1); j++) {
                cout<<ch;
                if(j<= breakpoint) ch++;
                else ch--;
            }
             // space 
            for(int space = 0; space <(n-i-1); space++) {
                cout<<" ";
            }
            cout<<endl;
            
            
        }

        
    }
};
