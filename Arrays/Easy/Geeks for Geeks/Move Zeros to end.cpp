
#include <bits/stdc++.h>

using namespace std;


class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // move Zero to back and order must be preserverd
	    // the question was shift zero to right side we changed
	    //the question in shfit nonzero element in left side.
	    
	    /* optimal approach - two pointer*/
	   // T.C - O(N) ; S.C - O(1);
	   int nonzero =0;
	    for(int i=0; i<n; i++) {
	        if(arr[i]!=0) {
	            swap(arr[i],arr[nonzero]);
	            nonzero++;
	        }
	    }
	    
	}
};
