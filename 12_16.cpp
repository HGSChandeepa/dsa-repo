#include <bits/stdc++.h>
using namespace std;

// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element
// maintaing  a second array and place the index with 1

int MissingNumber(vector<int>& array, int n) {

// array with n numbers
	int temp[ n];
	int ans;
	// set all the n to 0;
	for (int i = 0; i < n; ++i)
	{
		temp[i] = 0;
	}

	for (int i = 0; i < n-1; ++i)
	{
		temp[array[i] -1] =1;
	}
	for (int i = 0; i < n; ++i)
	{
		if (temp[i] == 0)
		{
			ans = i+1;
		}
	}

	return ans;
}
int main(){


	int N = 5;
	// int A[] = {6,1,2,8,3,4,7,10,5};
	vector<int> A = {1,2,3,5};

	cout<<MissingNumber(A,N);
	return 0;
}