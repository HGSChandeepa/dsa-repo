#include <bits/stdc++.h>
using namespace std;

// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S and return the left and right index of that subarray.
// In case of multiple subarrays, return the subarray indexes which comes first on moving from left to right.
// >>calculate the prefix sum
std::vector<int> v; subarraySum(int arr[], int n, long long s)
{
    	// sort the array ?? changes the order of the array
    	// sort(arr ,arr+n);
    	// pointers
    	int begin =0;
    	int end =0;
    	long long psum=arr[0];

    	if(psum ==s) return  (1 ,1);

    	while(end<n-1){
    		if(psum+arr[end+1] <= s){
    			psum +=arr[end+1];
    			end++;
    		}
    		else{
    			psum-= arr[begin];
    			begin++;
    		}

    		if(psum==s){
    			return (begin+1 ,end+1);

    		}
    	}
    	return -1;
    	
    	

}
int main(){

	int N = 10;
	int S = 15;
	int A[] = {1,2,3,4,5,6,7,8,9,10};

	cout<<subarraySum(A,N,S);

	return 0;
}