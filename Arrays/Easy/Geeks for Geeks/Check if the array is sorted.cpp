
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        int cnt=0;
        // n-1 bcoz it will not give segmentation error
        for(int i =0; i<(n-1); i++) {
            if(arr[i]<arr[i+1]||arr[i]==arr[i+1]) {
                cnt++;
            }
        }
        if(cnt==(n-1)) return true;
        else return false;
    }
};
