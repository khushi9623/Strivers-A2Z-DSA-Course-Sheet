

#include <bits/stdc++.h>
using namespace std;



class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        // INT_MIN = -2^31
        // we will compare with INT_MIN if the element is greater then store it in maxi variable, 
        // maxi will be update if existing value is smaller.
        int maxi = INT_MIN;
        for(int i=0; i<n; i++) {
            if(arr[i]>maxi) {
                maxi= arr[i];
            }
        }
        return maxi;
    }
};


