
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	
	void printTriangle(int n) {
	    //// row
	    for(int i=0; i<n; i++) {
	        // space
	        for(int space1 =0; space1<i ; space1++) {
	            cout<<" ";
	        }
	        // column
	        for(int j=0; j<(2*n)-((2*i)+1); j++) {
	            cout<<"*";
	        }
	        //space
	        for(int space2 =0; space2<i ; space2++) {
	            cout<<" ";
	        }
	        cout<<endl;
	        
	    }
	}
};
