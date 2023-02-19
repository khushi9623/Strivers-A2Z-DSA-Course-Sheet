#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* naive Approach 
         T.C - o(n^2) S.C - o(1)
         vector<int>v;
         for(int i=0; i<n; i++) {
             for(int j=i+1; j<n; j++) {
                 if(a[j]==target-a[i]) {
                     v.push_back(i);
                     v.push_back(j);
                     break;
                 }
             }
         }
         */

         /* optimal approach 
         we are using unordered map  in this insertion and deletion occur
         o(1) i.e is linear time so
         T.C o(N) - linear time
         S.C o(N) - map storage extra space taken
        for eg:-   2 6 5 8 11 target= 14;
         index     0 1 2 3  4

      case 1:   2 6 5 8 11
                i

                14-2 = 12, as 12 is not present in a map then put (2,0)
                in a map and so on..

       case 4 :  2 6 5 8 11   map{{2,0} {6,1} {5,2} {8,3} {11,4} }
                       i
        as 14-8 = 6 present in a map 
        ans : - (3,1) 
        */

        vector<int>ans;
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++) {
            if(mp.find(target - nums[i]) != mp.end()) { //find returns a ptr of key
                ans.push_back(mp[target - nums[i]]);
                ans.push_back(i);
            }
            mp[nums[i]]=i;
        }
         return ans;
    }
};