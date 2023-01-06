#include <bits/stdc++.h>
using namespace std;

// Given an integer N. Find maximum LCM (Least Common Multiple) 
// that can be obtained from four numbers less than or equal to N.
// Note: Duplicate numbers can be used.

// >> gcd must be always 1 for a maximmum lcm 

long long lcmfunc(int N){

    long long int ans = N;
    int count =0;
    for (long long int i = N-1; i >1 ; --i)
    {
    	if(__gcd(ans , i) ==1){
    		ans*=i;
    		count ++;
    	}

    	if (count ==3)
    	{
    		break;
    	}
    }

    return ans;
}
long long maxGcd(int N) {
        

        // if(N%2 == 0){
        // 	N=N-1;
        // }

        // if (N%2 ==1)
        // {
        // 	N=N;
        // }
        
        // lcm = N;
        // for (int i = N-1; i >1; --i)
        // {
        // 	//


        // 	if(  (lcm %  i ==0) ||(lcm %2 ==0 && i%2==0) || (lcm %3 ==0 && i%3 ==0)){

        // 		lcm =lcm;
        // 	}
        // 	else{
        // 		// cout<< i << "\n";
        // 		lcm*=i;
        // 		count++;
        // 	}

        // 	if(count ==4) break;
        // }
        //  cout<< count<< "\n";


        // return lcm;


    return max(lcmfunc(N) , lcmfunc(N-1));    

}

// Given an unsorted array arr[ ] of size n, you need to find the maximum difference of absolute values of elements
 // and indexes, i.e., for i <= j, calculate maximum of | arr[ i ] - arr[ j ] | + | i - j |. 
int maxDistance(int arr[], int n) { 
    
    int diff=0;
    int minindex=-1;
    int maxindex=-1;
    int min=INT_MAX;
    int max =INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        // find min and max
        if(arr[i] <=min){
            min =arr[i];
            minindex =i;
        }

        if(arr[i] >= max){
            max =arr[i];
            maxindex =i;
        }
    }



    // int diffval = (max -min );
    // if (diffval < 0)
    // {
    //     diffval = diffval*-1;
    // }

    // int diffind = (maxindex -minindex );
    // if (diffind < 0)
    // {
    //     diffind = diffind*-1;
    // }

    if( maxindex >= minindex){

        maxindex= maxindex;
        minindex = minindex;
    }


    if (maxindex < minindex)
    {
        int temp =maxindex;
        maxindex = minindex;
        minindex =temp;
    }

    diff = max- min+ maxindex -minindex;

    return diff;
}


void binaryConvert(int num){

    
    int ans[32];
    int k=0;
    while(num >0){

        ans[k] = num % 2;
        num = num / 2;
        k++;
        


    }
    for (int i = k-1; i >= 0; --i)
        {
            cout<< ans[i];
        }
}

int main(){



	// cout<<maxGcd(13);
    int n = 7;
    int arr[ ] = {5, 9, 2, 6 , 0 ,-1 ,12};
    cout<<maxDistance(arr,n);
    // binaryConvert(10);
    }