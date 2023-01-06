#include <bits/stdc++.h>
using namespace std;

// void rearrange(long long *arr, int n) 
//     { 
//     // 	manage 2 pointers as the array is sorted




    
//     vector<long long> ans;
    
//     for(int i=0 ;i <= n/2 ;i++){

//     	 int l =i ,r =n-i-1;

//     	 if(ans.size()==n){
//     	 	break;
//     	 }

//     	else if(r==l){
//     		ans.push_back(arr[r]);
//     		break;
//     	}
//     	else if(r!=l){
//     		ans.push_back(arr[r]);
//     		ans.push_back(arr[l]);
//     	}
    
// }

//     for(auto &itr :ans){
//     	cout<< itr<<" ";
//     }


//     // for(int i=0 ; i<ans.size() ;i++){
//     // 	cout << ans[i];
//     // }

//  }



//  for O(1) space we can use the x = a+ bp methode because we can use the data installed in the pointer

void rearrange(long long *arr, int n) {


    for(int i=0 ; i<n ;i++){

        // long long curr , l ,r;
        // int max =INT_MAX;

        // curr = l+ max*r;

      long long curr = arr[i];
      long long end =arr[n-1-i];

      arr[i] = end;
      arr[i+1] = curr;


      cout<< curr;
    }

    for (int i = 0; i < n; ++i)
    {
        cout<< arr[i];
    }
}
	
int main(){


	int n = 5;
	long long arr[] = {1,2,3,4,5};
	rearrange(arr ,n);



	return 0;
}