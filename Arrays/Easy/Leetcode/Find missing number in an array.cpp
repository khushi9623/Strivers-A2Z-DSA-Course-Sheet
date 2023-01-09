#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

 /*-----------------------------------------------------------------------
 Naive approach :-

1.nums vector is ranging [0,n].  
2.Create a vector  V of n+1 and initailize it by 0.
3.traverse the given nums and increase the value of substitute[V[i]] by 1.
4.Then again traverse the substitute array starting from index 1 to N.
5.If you find any index value = 0 then that is the missing element B.

T.C - O(n)  and S.C - o(n);
----------------------------------------------------------------------------
Approach 2 :-

add all the elements of nums and substract it by sum of n natural number

Missing number =  [n(n+1)/2] - Sum of elemnt in nums

T.C - o(n) S.C - o(1);
-----------------------------------------------------------------------------
Optimal approach :-

 given in solution. 
 T.C - O(N) and S.C = o(1)
----------------------------------------------------------------------------*/
    int n = nums.size();
    int xorr = 0;
    for(int i=0; i<n; i++) {
        xorr = xorr^nums[i];
    }
     for(int i=1; i<=n; i++) {
        xorr = xorr^i;
    }
     return xorr;
    }
};