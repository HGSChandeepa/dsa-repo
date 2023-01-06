#include <bits/stdc++.h>
using namespace std;

// Given two binary strings A and B consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
// Note: The input strings may contain leading zeros but the output string should not have any leading zeros.

string addBinary(string A, string B)
	{
	    // make both str equal adding 0 to 

	    string ans ="";
	    char c='0';

	    while(A.length() > B.length()){
	    	B ='0' +B;
	    }
	    while(A.length() < B.length()){
	    	A ='0' +A;
	    }

	    // iterate and get suma and add to thehe answer

	    for(int i = A.length() -1 ; i>=0 ;i--){

	    	int sum =(A[i]- '0' )+( B[i] -'0')+(c -'0');
	    	if(sum ==3){
	    		c ='1';
	    		ans+='1';

	    	}
	    	else if(sum ==2){
	    		c ='1';
	    		ans+='0';

	    	}
	    	else if(sum ==1){
	    		c ='0';
	    		ans+='1';

	    	}
	    	else if(sum ==0){
	    		c ='0';
	    		ans+='0';

	    	}

	    	// check any ending 0 and remove  it

	    	while(ans.length() >0 && ans[ans.length()-1]=='0'){
	    		ans.pop_back();
	    	}

	    	reverse(ans.begin() ,ans.end());
	    }

	    if(ans =="") ans ="0";

	    return ans;
	

}


int main(){


	string A = "1101";string B = "11";

	 vector<int> ans;

	cout<<addBinary(A ,B);

	// for(auto &t :ans) cout<< t;

	return 0;
}