#include <bits/stdc++.h>
using namespace std;
// 
vector<int> asteroidCollision(int N, vector<int> &asteroids) {

	vector<int>pos;
	vector<int>neg;
	int possum=0;
	int negsum =0;
	bool isneg =false;
	// separate

	for (int i = 0; i < N; ++i){

		if(asteroids[i] <0){
			isneg = true;
		}
		if( isneg == true){
			neg.push_back(asteroids[i]);
			negsum+=asteroids[i];
		}
		else{
			pos.push_back(asteroids[i]);
			possum+=asteroids[i];


		}
	}

	negsum=negsum*-1;
	if(possum> negsum){
		return  pos;
	}

	if(possum < negsum){
		return neg;
	}

	else{
		return {};
	}



	
}
int main(){
	vector<int>v= {3, 5, -3};
	vector<int> ans;
	ans =asteroidCollision(3 ,v);
	for (int i = 0; i < ans.size(); ++i)
	{
		cout<<ans[i];
	}

	return 0;
}