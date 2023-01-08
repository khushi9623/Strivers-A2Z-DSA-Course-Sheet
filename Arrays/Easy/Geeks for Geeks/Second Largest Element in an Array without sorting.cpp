
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	
	int print2largest(int arr[], int n) {
	   int firstlargest , secondlargest;
	   
	   firstlargest=secondlargest=INT_MIN;
	   
	   if(n<2) return -1;
	       for(int i=0; i<n; i++) {
	           
	       if(arr[i]>firstlargest){
	           
	           secondlargest=firstlargest;
	           
	           firstlargest=arr[i];
	       }
	      else if(arr[i]>secondlargest && firstlargest!=arr[i]) {
	          secondlargest=arr[i];
	      } 
	  
	   }
	   if(secondlargest==INT_MIN) return -1;
	   else return secondlargest;
	}
};
