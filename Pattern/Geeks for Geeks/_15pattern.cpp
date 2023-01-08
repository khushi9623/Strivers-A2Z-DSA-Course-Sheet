
#include <bits/stdc++.h>

using namespace std;
//
class Solution {
  public:
    void printTriangle(int n) {
     // row
     for(int i =1; i<=n; i++) {
         // column
         for(char ch = 'A'; ch<='A'+(n-i); ch++) {
             
             cout<<ch;
         }
         cout<<endl;
     }
    }
};
