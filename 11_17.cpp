#include <bits/stdc++.h>
using namespace std;

// for order of O(n) time we can use a hashmap
// check there is a satisfing ele for arr[x]+k(in set) =x

bool hasArrayTwoCandidates(int arr[], int n, int x) {

	// define a set(unordered)
	   unordered_set<int>s;
	   for(int i =0 ;i<n ;i++){

   //if the element is found before the end of the set
	   		if(s.find(x-arr[i]) !=s.end()){
	   			return true;
	   		}
	   		s.insert(arr[i]);
	       
	   }
	   return false;
}


int main(){

	int N = 6 , X = 11;
	int arr[] = {1, 4, 5, 6, 10, 8};

	cout<<hasArrayTwoCandidates(arr ,N ,X);
	
	return 0;
}