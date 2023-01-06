#include <bits/stdc++.h>
using namespace std;
// Given a string S, return the sum of beauty of all its substrings.
// The beauty of a string is defined as the difference in frequencies between the most frequent and least frequent characters.
// For example, the beauty of string "aaac" is 3 - 1 = 2.
// methode:for all substrings we have to calculate the freq difference and
// we have to add the of diff >0




int beautySum(string s){

	int n =s.length();
	int diff;
	map<char ,int> freq;
	int sum =0;
	for( int i =0 ; i<n-1 ;i++){

		for(int j =i ;j<n ;j++){

			if(freq.find(s[j]) ==freq.end()){
				freq.insert(make_pair(s[j] ,1));
			}
			else{
				freq[s[j]]++;
			}



		}

		// count max and min fre for each

		int max =INT_MIN;
		int min =INT_MAX;

		for(auto& k :freq){
			if(k.second > max){
				max=k.second;
			}
		}
		// cout<<max;

		for(auto& k :freq){
			if(k.second < min){
				min=k.second;
			}
		}
		// cout<<"\n";
		// cout<<min;

		

		diff =max-min;

		
		sum+=diff;


		

		
		freq.clear();
}


	return sum;
}



int main(){
	string S = "geeksforgeeks";
	

	cout<<beautySum(S);
	return 0;
}