#include <bits/stdc++.h>
using namespace std;


// sorting algorithms
// normal search

int printArr(int * A , int n){
	for (int i = 0; i < n-1; ++i)
	{
		cout<< A[i];
	}

	return 0;
}


// genarate a random array
// len is user defined
int randomArray(int n){

	int A[n] = {0};

	for (int i = 0; i < n; ++i)
	{	
		// genarate a random number breteweeen 0 and 1000
		int  A[i] =(rand()%100);
	}

	return 0;

}
int finf(int* A ,int val ,int n){


	int i =0;
	for ( i = 0; i < n-1; ++i)
	{
		if(A[i] ==val){
			return 1;
		}


	}
	if(i == n-1 ){
			return -1;
		}

		return 0;
}

// binary sort

void binarySort(int * A , int val, int n ){

	int l =0;
	int r =-1;
	int found =-1;


	while( l <= r && found ==-1){

		// finding the mid
		int mid = (l +r) /2;
		if(mid == val){

			cout<< 1;
		}

		if(mid > val){
			r= mid -1;
		}

		else{
			l = mid +1;
		}
	}
}

int main(){

	return 0;
}