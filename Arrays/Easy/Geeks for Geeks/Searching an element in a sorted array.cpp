
#include <bits/stdc++.h> 

using namespace std;

class Solution{
    public:
   
    int searchInSorted(int arr[], int N, int K) 
    { 
     /* A given array is sorted,
     
     and you are asked to find an element in that array
     
     use binary search rather than linear search.
     
     Binary search is used in sorted arrays,
    
     while linear search is used in unsorted arrays 
     
     T.C - O(logN), S.C - O(1);*/
     
     int start=0;
     int end =N-1;
     while(start<=end) {
         int mid = start+(end-start)/2;
         if(arr[mid]==K) return 1;
         if(arr[mid]> K) {
             end = mid-1;
         }
         else start = mid+1;
     }
     return -1;
       
    }
};



