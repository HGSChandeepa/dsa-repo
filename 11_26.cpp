#include <bits/stdc++.h>
using namespace std;

// print from 1 to n using recursion and backtracking
// n=3 >> 1  2 3
int t =0;


int fact(int n){
	if (n ==0){
		return 1;
	}

	else{
		return n*fact(n-1);
	}
}
void printFucnc(int n){
	

	if(n<1){
		return;
	}

	// printFucnc(n-1);
}

void swaparr(int arr[] ,int l ,int r){

	if(l>=r) return;

	swap(arr[l] ,arr[r]);

	swaparr(arr ,l+1 ,r-1);
	
}


void separeate(int  n){

	vector<int> ans;
	while(n>0){
		int mode = n%10;
		ans.push_back(mode);
		// return a int always
		mode/=10;

	}
}




int main(){
	
	// printFucnc(3);
	// cout<<fact(4);
	int arr[] ={1,2,3,4,5,6,7,8,9};
	int n  = sizeof(arr)/sizeof(arr[0]);
	swaparr(arr,0 ,n-1);

	

	return 0;


}
