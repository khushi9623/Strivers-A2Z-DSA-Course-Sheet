
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /* Rotating array A by K positions yields an array B of the same length, 
	   such that A[i]= B[(i+x)%A.length()]; this is the basic rotation formula. 
	   this is use for right rotation of an array */
        int n= nums.size() ;
        vector<int>temp(n);
        for(int i=0; i<n; i++) {
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;
    }
};