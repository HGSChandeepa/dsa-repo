#include <bits/stdc++.h>
using namespace std;


// Given a number k and string num of digits (0 to 9) denoting a positive integer.
// Find a string denoting the lowest integer number possible by removing k digits 
// from num, without changing their order.
// Note: num will not contain any leading zero.



string buildLowestNumber(string num, int k)
{
	string ans = " ";
	int l =0;
	int r =-1;
	int count =0;

	// int len  = num.size();

	

	for (int i = 0; i < num.length(); ++i)
	{
		if (num[l] > num[r])
		{
			int pos =l;
			num.erase(pos + 1);
			// strValue.erase(indexPos, 1);
		}
	}
    return ans;
    
 }	



int main(){

	int k = 2;
	string num = "143729";
	cout << buildLowestNumber(num ,k);

	return 0;
}