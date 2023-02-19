#include <bits/stdc++.h>

using namespace std;

class Solution{
    public:
    vector<pair<int,int>> allPairs(int A[], int B[], int N, int M, int X)
    {
           vector<pair<int,int>>ans;
           
           set<int>s;
           
           for(int i=0; i<N; i++) {
               s.insert(A[i]);
           }
           for(int i=0; i<M; i++){
               if(s.find(X-B[i])!=s.end()) {
                   ans.push_back({(X-B[i]),B[i]});
               }
           }
           sort(ans.begin(),ans.end());
           return ans;
           
           
    }
};
