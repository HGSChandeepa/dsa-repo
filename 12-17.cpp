#include <bits/stdc++.h>
using namespace std;


// Given an array Arr[] of N integers. Find the contiguous sub-array
// (containing at least one number) which has the maximum sum and return its sum.


// >> Kadane's Algorithm

long long maxSubarraySum(int arr[], int n){
        
    long long maxsum =arr[0];
    long long currsum =arr[0];

    for (int i = 0; i < n; ++i)
    {
    	
    	currsum +=arr[i];
    	maxsum = (maxsum ,currsum);
    	if(maxsum >= currsum){
    		maxsum =maxsum;
    	}
    }

    return maxsum;

        
}
// 

// problem 2
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
	// join the arrays 2 pointers for array 1 beging and array 2 end

	int i =0;
	int j =0;
	int k=0;
	int ans;
	vector<int>newarr;

	while(i < nums1.size() && j < nums2.size() ){

		if( nums1[i] < nums2[j]){
			newarr.push_back(nums1[k]);
			i++;

		}
		else{
			newarr.push_back(nums2[k]);
			j++;
		}

		k++;

		
	}

	while ( i < nums1.size()){

		newarr.push_back(nums1[i]);
		i++;
	}


	while ( j < nums2.size()){
		

		newarr.push_back(nums2[j]);
		j++;	
	}

	if(newarr.size() %2 ==0){
		ans =( newarr[newarr.size()/2]+newarr[newarr.size()/2 +1])/2;
	}
	else{
		ans = newarr[newarr.size()+1];
	}

	return ans;
}

int main(){


	int N = 4;
	int Arr[] = {-1,-2,-3,-4};

	// cout<<maxSubarraySum(Arr ,N);

	vector<int> a ={1,2,10};
	vector<int> b ={2,5};
	cout<<findMedianSortedArrays(a,b);

	return 0;


}