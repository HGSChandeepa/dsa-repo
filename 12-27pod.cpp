#include <bits/stdc++.h>
using namespace std;

//
long long maxArea(long long A[], int len)
{
    int l=0;
    int r=len-1;
    
    long long int ans =INT_MIN;

    while(l<r){
    	int base = r-l;
    	ans= max(base*min(A[l] , A[r]) , ans);
    	l++;
    	r--;
    	
    	
    }
    cout<< l << r<< endl;

    return ans;	
} 

// 

int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        int len=capacity.size();
        int total=0;
        int diff =0;
        int zero=0;
        vector<int>v;
        for( int  i =0  ; i< len ; i++){
            total += (capacity[i] - rocks[i]);
            diff = capacity[i] -rocks[i];
            if(diff ==0){
                zero++;
            }

            else{
                v.push_back(diff);
            }
            

        }

        // large number os additionalrocks
        if( additionalRocks >= total){
            return len;
        }
        // limited additions
        sort(v.begin() , v.end());
        // for (int i = 0; i < v.size(); ++i)
        // {
        // 	cout<<v[i];
        // }
        int i =0;
        int vsum =0;
        while(vsum <= additionalRocks){
            vsum+=v[i];
        	cout<<vsum;

            i++;
        }

        return (zero+i);

        
    }

int main(){

	// long long a[] = {1,5,4,3};
	// int len = 4;

	// cout<<maxArea(a ,len);
	vector<int> a ={2,3,4,5};
	vector<int> b ={1,2,4,4};

	cout<<maximumBags(a,b,2);
	return 0;
}