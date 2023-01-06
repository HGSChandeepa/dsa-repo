#include <bits/stdc++.h>
using namespace std;


// Given an array of integers and a number k, write a function that returns true if given array can be divided 
// into pairs such that sum of every pair is divisible by k.

// >>reamainder array >> addithioonn is o or k and add them in a hash map

bool canPair(vector<int> nums, int k) {
// remainder array
	vector<int>reminder;
	// map<int,int> mp;
	set<int> ans;
	int count =0;

	for (int i = 0; i < nums.size(); ++i)
	{
		reminder.push_back(nums[i]%k);
	}

	// iterate through the remainder and find k-rem[i]
	for (int i = 0; i < reminder.size(); ++i)
	{
		int num = k -reminder[i];

		if(ans.find(num) == ans.end()){

			ans.insert(num);
		}
		else{

			count++;
		}
	}

	for(auto itr = ans.begin() ; itr!= ans.end(); itr++){

		cout<< " " <<*itr ;
	}

	if( count ==2){
		return true;
	}




	return false;
}
int main(){

	 
	vector<int> arr = {9, 5, 7, 3};;
	int k = 6;		
	cout<<canPair(arr ,k);
	return 0;
}