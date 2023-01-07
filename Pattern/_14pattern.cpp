
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
    
          // rows
        for(int i=1; i<=n; i++) {
            
            // column
            for(char j='A'; j<'A'+i; j++) {
                 
                cout<<j;
            }
            cout<<endl;
        }
    }
};
