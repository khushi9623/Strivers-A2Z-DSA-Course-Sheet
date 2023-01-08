
#include <bits/stdc++.h>

using namespace std;


class Solution{   
public:
void reverse(int arr[],int start, int end) {
   while(start<=end) {
        swap(arr[start],arr[end]);
        start++;
        end--;
   }
}
    void leftRotate(int arr[], int n, int d) {
        d=d%n;
        reverse(arr,0,n-1);
        reverse(arr,0, n-d-1);
        reverse(arr,n-d,n-1);
    }
};
