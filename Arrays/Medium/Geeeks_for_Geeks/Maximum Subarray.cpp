#include<bits/stdc++.h>

using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
    
    long long sum = 0;
    long long maxi = arr[0];
    for(int i=0; i<n; i++) {
        sum = sum+arr[i];
        maxi = max(maxi, sum);
        if(sum<0) {
            sum=0;
        }
    }
    
      return maxi;  
    }
};
