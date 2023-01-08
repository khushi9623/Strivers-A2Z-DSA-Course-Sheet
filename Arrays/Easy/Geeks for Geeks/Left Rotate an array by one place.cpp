
#include <bits/stdc++.h>

using namespace std;

class Solution{
	/* Rotating array A by K positions yields an array B of the same length, 
	   such that A[i]= B[(i+x)%A.length()]; this is the basic rotation formula. 
	   this is use for right rotation of an array */
	
	public:
	void reverse(int arr[], int start, int end) {
	    
	    while(start<=end) {
	        
	        swap(arr[start],arr[end]);
	        start++;
	        end--;
	    }
	}
	void leftRotate(int arr[], int k, int n) 
	{ 
	    k %= n;

    // Reverse all numbers
    reverse(arr, 0, n-1);

    // Reverse first arr.length-k numbers
    reverse(arr, 0, n-k-1);

    // Reverse last k numbers
    reverse(arr, n-k, n-1);
	   
	} 
	
	/*
	for eg:- arr[]= {1,2,3,4,5,6,7}
	 here K=3;
	 step 1 :- Reverse all the number
               arr[	]= {7,6,5,4,3,2,1};
     
     step 2:-  Reverse first (length-K) number
               we have to rotate (7-3)= 4 first element
               arr[]= {4,5,6,7,3,2,1};
               
     step 3:- Revserse last K numbers
              arr[]= {4,5,6,7,1,2,3}
              
     Total T.C - O(N) we are traversing array
     Total S.C - O(1) not use extra space;*/

};

