#include <bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
        // set<int> s;
		vector<int> v;
        int n = costs.size();
        int num =0;

        for( int  i= 0 ; i< n ;i++ ){
            v.push_back(costs[i]);
        }

        sort(v.begin() , v.end());

        for( auto  itr : v){

            if ( coins >= itr){
                coins -= itr;
                num++;
            }
            
            

       
        }

        return num;
}


int main(){

	vector <int> arr = {1,6,3,1,2,5};
	cout<< maxIceCream(arr , 20);

	return 0;
}