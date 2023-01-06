#include <bits/stdc++.h>
using namespace std;


vector<int> ans;
int isDigitSumPalindrome(int N) {
         
         int sum =0;
         while(N>0){
             int mode =N%10;
             sum+=mode;
             N/=10;
         }

         cout<<sum;
         
         // while(sum>0){
         // 	int num =sum%10;
         // 	ans.push_back(num);
         // 	num/=10;
         // }


        


        return 0;
    }

// 344 >> 4  4 3 >> 11 >> 1 1 

int main(){

	isDigitSumPalindrome(3444);
	// for(auto &itr : ans){
	// 	cout<<itr;
	// }

	

	return 0;
}