/*
Any pattern can be solved using the following rules:

1) The outer loop is always for rows; count the number of rows and determine the range accordingly.

2)internal loop concentrate on columns and connect them to rows in some way

3)Print whatever you want in the inner loop.

4) Take note of the symmetry (optional)

*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends