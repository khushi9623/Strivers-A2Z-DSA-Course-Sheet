
#include <bits/stdc++.h>

using namespace std;

//
class Solution{
public:
	
	void printTriangle(int n) {
	    
	   // row
	    for(int i=1; i<=n; i++) {
	        
	        // column
	        
	        for(int j=1 ; j<=(n-i+1) ; j++) {
	            cout<<j<<" ";
	        }
	        cout<<endl;
	    }
	}
};
