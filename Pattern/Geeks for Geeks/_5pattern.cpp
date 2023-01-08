
#include <bits/stdc++.h>
//
using namespace std;

class Solution{
public:
	
	void printTriangle(int n) {
	    //row
	    for(int i=0; i<n; i++) {
	        // column
	        for(int j=0; j<=(n-i-1); j++) {
	            cout<<"*"<<" ";
	        }
	        cout<<endl;
	    }
	}
};
