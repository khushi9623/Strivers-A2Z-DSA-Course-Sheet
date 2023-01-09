
#include <bits/stdc++.h>

using namespace std;


class Solution{
public:
    int findZeroes(int arr[], int n, int m) {
        /* Subarray is contiguous part of array
        Let us see some examples so we can deep dive to conculsion
        for eg :- 1 1 1 1 1   m=1 (Flipping 0's)
                  the ans will be 5 irrespective of m.
         
        for eg :- 1 0 1 1 0 1 1 1 0 1   m=2;
                  Case 1:-
                  let us flip first and last zero as m=2;
                  after flipping we get
                  1 1 1 1 0 1 1 1 1 1
                  so maximum subarray length is 5;
                  
                  Case 2:-
                  let us flip consecutive zeros as m=2;
                  after flipping we get
                  1 1 1 1 1 1 1 1 0 1
                  so maximum subarray length is 8;
                  
                  b)let us flip consecutive zeros as m=2;
                  after flipping we get
                  1 0 1 1 1 1 1 1 1 1
                  so maximum subarray length is 8;
                  
        ans = 8;
        
        observation made :-
        1) Flipping last and first zero is worst choice.
        2)flipping consecutive zero is best choice.
        
        */
        int flip =0; // it keep track of number of flips made
        int ans = 0; // return maximum subarray length
        int i=0; // pointer for moving forward
        int j=0; // unflipping requried;
        
        while(i<n) {
            
            if(arr[i]==0) {
                flip++;
            }
            while(flip>m) {
            //unflip previous 0 bcoz yu cannot go forward
            if(arr[j]==0) {
                flip--;
            }
            j++;
           }
           //length of segment
             ans= max(ans,i-j+1);
             i++;
        
        }
        return ans;
    

    
    }  
};
