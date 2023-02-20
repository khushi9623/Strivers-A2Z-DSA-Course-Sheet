
#include <bits/stdc++.h>
using namespace std;


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        long long maxi=0;
        long long sum=0;
        for(long long i=0; i<N-1; i++) {
            
        long long largest = max(arr[i], arr[i+1]);
        
        long long smallest = min(arr[i], arr[i+1]); 
        
        sum =  largest +   smallest ;
        
        maxi = max (sum,maxi);
        
        }
        return maxi;
    }
};
