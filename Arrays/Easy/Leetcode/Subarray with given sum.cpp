#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       /* 
        Brute force approach ------ o(n^2);
        int n = nums.size();
        int sum = 0;
        int cnt=0;
        for(int i=0; i<n; i++) {
            // checking the one element is equal to k;
            sum = nums[i];
            if(sum==k) {
                cnt++;
            }
            for(int j = i+1; j<n; j++) {
                sum+=nums[j];
                if(sum==k) {
                    cnt++;
                }
            }

        }
        return cnt;
        */
    /*optimal approach is to use prefix sum, prefix sum is always use in subarray
    if sum of subarray from L to R is ask then for one query it is easy to solve 
    But if Q=10^5 N=10^5  O(10^10);
    to avoid this we use prefix sum concept

    Prefix sum concept :-
    prefix sum means calculating  sum from start to ith element of array.

    for eg:- int a[]= {1,2,3};
          create a array of pre[n];
          pre[0]= a[0] i.e 1;
          pre[1]= a[0]+a[1] i.e 3;
          pre[3]= a[0]+a[1]+a[2] i.e 6;

          general formula 
          pre[0]= a[0];
          for(i=1 to n-1) {
              pre[i]= pre[i-1]+a[i];
          }
          if Q quereies given and Li and Ri given;
          for(i=0 to q-1) {
              ans= pre[Ri];
              if(Li>0) {
                  ans= ans-pre[Li-1];
              }
          }
          */
        int n = nums.size(); // take the size of the array
        
        int prefix[n]; // make a prefix array to store prefix sum
        
        prefix[0] = nums[0]; // for element at index at zero, it is same
        
        // making our prefix array
        for(int i = 1; i < n; i++)
        {
            prefix[i] = nums[i] + prefix[i - 1];
        }
        
        unordered_map<int,int> mp; // declare an unordered map
        
        int ans = 0; // to store the number of our subarrays having sum as 'k'
        
        for(int i = 0; i < n; i++) // traverse from the prefix array
        {
            if(prefix[i] == k) // if it already becomes equal to k, then increment ans
                ans++;
            
            // now, as we discussed find whether (prefix[i] - k) present in map or not
            if(mp.find(prefix[i] - k) != mp.end())
            {
                ans += mp[prefix[i] - k]; // if yes, then add it our answer
            }
            
            mp[prefix[i]]++; // put prefix sum into our map
        }
        
        return ans; // and at last, return our answer
    
    }
};
