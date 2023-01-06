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
	for( int i =0 ; i<n ;i++){

		for(int j=i ;j<n;j++){

			cout<<j<<" ";
		}
		cout<<"\n";

		

			if(freq.find(s[i]) ==freq.end()){
				freq.insert(make_pair(s[i] ,1));
			}
			else{
				freq[s[i]]++;
			}


		}
		for(auto& itr :freq){
			// cout<<itr.first << " "<<itr.second<<"\n";	

	

		// print mapp
		// for(auto itr =freq.begin() ; itr!=freq.end();itr++){

		// 	cout<<itr->first << " "<<itr->second<<"\n";
		// }
		// freq.clear();
		// cout<<"end"<<"\n";

	}


	return 0;
}



int main(){
	string S = "aaac";
	

	beautySum(S);
	return 0;
}