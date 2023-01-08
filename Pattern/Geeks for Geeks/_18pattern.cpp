
#include <bits/stdc++.h>

using namespace std;


class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++)
        {
            for(char ch=(n-1)+'A';ch>='A'+n-i-1;ch--)
            {
                cout<<ch<<" ";
            }
            cout<<endl;
        }
    }
};