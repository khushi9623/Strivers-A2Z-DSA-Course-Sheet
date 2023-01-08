
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /* Input: nums = [0,0,1,1,1,2,2,3,3,4]
        Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
        Explanation: 
        Your function should return k = 5,
        with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
        It does not matter what you leave beyond the returned k (hence they are underscores).*/
       
        /* A Naive Solution
        Insert an array element into hashset, because hashset stores unique elements in ascending order.
        The time complexity would be O(NlogN), N for array traversal and logN for Hashset storage. 
        However, the problem does not end here; we must now place the elements of hashset in an array.
         So;
        Total T.C = O(NlogN)+O(N); Total S.C = o(N) as the array's entire element is stored */

        /* Optimal solution
        Use two pointer approach, mainly this technique is use whwn array is sorted in ascending or decending order
        let say, we have two pointer i and j;
        for eg:- nums[] ={ 1 , 1 ,  2 ,  2  ,  3 ,  3 }
                           ^   ^
                           i   j
                           here i is at 0 indexing and j is at 1 indexing
                           as  nums[i]= nums[j] then increment the j 
                           now j will be  2

                        nums[] ={ 1 , 1 ,  2 ,  2  ,  3 ,  3 }
                                  ^        ^
                                  i        j 
                                  now nums[i]!=nums[j], increment the i, now i will be 1 and j is still 2;
                                  update nums[i]= 2;

                                  nums[] ={ 1 , 2 ,  2 ,  2  ,  3 ,  3 }
                                                ^    ^
                                                i    j
                                             now, nums[i]=nums[j]  increment the j 
                                             i=1  j would be 3.

                                   nums[] ={ 1 , 2 ,  2 ,  2  ,  3 ,  3 }
                                                ^          ^
                                                i          j
                                 continue the process till we get final array as
                                
                                  nums[]= {1,2,3,2,3,3}

                                  T.C = O(N) traversing in an array
                                  S.C = o(1) not using extra space, modifying in same array */

                                  int n = nums.size();
                                  if(n==0) return 0;

                                  int i=0;
                                  for(int j=1; j<n; j++) {
                                      if(nums[j]!=nums[i]) {
                                          i++;
                                          nums[i]=nums[j];
                                      }
                                  }
                                 return i+1;

    }
};