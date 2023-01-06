#include <bits/stdc++.h>
using namespace std;

// Given an integer N. Find maximum LCM (Least Common Multiple) 
// that can be obtained from four numbers less than or equal to N.
// Note: Duplicate numbers can be used.


long long maxGcd(int N){

	int gcd =N* (N-1);
	int ans =0;
	// if cant form 4 nums

	if(N<=1) return -1;

	for (int i = N; i > N-4;i--)
	{

	}

	
	return ans;
}

int main(){

	maxGcd(5);

	int as =-12;
	cout<< as;
	return 0;
}