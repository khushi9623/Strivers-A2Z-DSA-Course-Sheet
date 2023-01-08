
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int i=0;
        // we use two pointer approach here
        // two point approach is mostly use for sorted array
       // here the two variable i.e i and j use known as two pointer
       
        for(int j=1; j<n; j++) {

            if(a[i]!=a[j]) {

                i++;
            }
        }
        
        return i+1;
    }
};
