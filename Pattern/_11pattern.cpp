
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    void printTriangle(int n) {
        // we will start numbering row from 0;
        // you will observe that ;
       //1) even  number row start with 1 and then it gets flip eg:-1 0 1 
       //2) odd number row start with 0 then it gets flip eg:- 0 1 0;
       int start=1;
       for(int i=0; i<n; i++) {
           
           if(i%2==0) start=1;
           else start=0;
           
           for(int j=0; j<=i; j++) {
               
               cout<<start<<" ";
               
               start=1-start;
           }
           cout<<endl;
       }
        
    }
};
