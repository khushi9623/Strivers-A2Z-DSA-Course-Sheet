
#include <bits/stdc++.h>

using namespace std;

/* 
Naive approach comes in head that use hashset, bcoz hashset stores unique element.

T.C - o(NlogN) +o(MlogM)+o(N+M)

O(NlogN)- traversing array of length N and storing in set.
o(MlogM)-traversing array of length M and storing in set.
o(N+M) - traversing set and printing element of an array.

S.C - o(N+M) storing in set,

/*class Solution{
    public:
    
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>v;
        set<int>s;
        for(int i=0; i<n; i++) {
            s.insert(arr1[i]);
        }
         for(int i=0; i<m; i++) {
            s.insert(arr2[i]);
        }
        for(auto i : s) {
            v.push_back(i);
        }
        return v;
    }
};*/

/* Optimal solution,
as sorted array given,Use two pointer approach
T.C - O(N+M) , S.C - o(1)
*/

    class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i = 0, j = 0;
        vector<int> ans;
        if(arr1[i] < arr2[j])
        ans.push_back(arr1[i++]);
        else
        ans.push_back(arr2[j++]);
        
        
        while(i < n && j < m)   {
            if(arr1[i] < arr2[j])   {
                if(arr1[i] != ans[ans.size() - 1]){
                    ans.push_back(arr1[i]);
                }
                i++;
            }
            
            else {
                if(arr2[j] != ans[ans.size() - 1]){
                     ans.push_back(arr2[j]);
                }
                j++;
            }
        }
        
        while(i < n)    {
            if(arr1[i] != ans[ans.size() - 1]) {
              ans.push_back(arr1[i]);  
            }
            
            i++;
        }
        
        while(j < m)    {
            if(arr2[j] != ans[ans.size() - 1]) {
                  ans.push_back(arr2[j]);
            }
            j++;
        }
        
        return ans;
    }
};

	



	