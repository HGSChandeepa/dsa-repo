#include <bits/stdc++.h>
using namespace std;


void subarraySum(int arr[], int n, long long s){
    int i ,j;
    for( i =0 ;i<n ;i++){
        
        long long sum =0;
        for( j=i ;j<n ;j++){
            
            sum+=arr[j];
            if(sum ==s){
            cout<<i+1<<" "<<j+1<<"\n";
            break;
        }
         


       
            
    }
        if(sum ==s){
           
            break;
        }

    }



}

        

    int main(){
        int N = 5; 
        long long S = 12;
        int A[] = {1,2,3,7,5};
        subarraySum(A,N,S);

        

        return 0;
    }