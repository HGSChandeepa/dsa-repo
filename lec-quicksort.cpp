#include <bits/stdc++.h>
using namespace std;

// 7 3 21 4 8 10 4 6 9
void quickSort(int arr[] , int n){

	int pivot = arr [-1];
	int  k =0 ;  // k for array indexing and j for finding the smaller or equal
	 for (int i = 0; i < n; ++i)
	 {
	 	// if less than pivot or equal
	 	if(arr [i] <= pivot){
		 k++;
		}
		else{
			swap( arr[i] ,pivot);

		}
	 }

	
}

 int partition (int arrnew[] , int start , int end){
 	int  p = arrnew [end];
 	int  j = start;

 	for (int i = start; i < end; ++i)
 	{
 		if( arrnew[i] <=p){
 			// swap pivot and newarr[i]
 			int temp  = arrnew[i];
 			arrnew[j] =arrnew [i];
 			arrnew [i] = temp;
 			j++;

 		}
 	}

 	// else exchange the pivote and newarr [i]
 	
 		
 		int temp = arrnew [end];
 		arrnew[end] = arrnew[j];
 		arrnew[j] =temp;



 	

 	return  j;
 }

 void quicksortinf( int arrnew[ ] , int start , int end){

 	if( start <end){

 		int p =partition(arrnew ,start ,end);// j
 		
 		quicksortinf ( arrnew , start , p-1);
 		quicksortinf( arrnew , p+1 ,end);


 	}
 	 
 }


int main(){


	int array [9] ={7 ,3 ,21, 4, 8 ,10, 4, 6, 9};
	int n =9 ;
	
	quicksortinf(array , 0 , 9);

	for (int i = 0; i < 9; ++i)
	 {
	 	cout << array[i]<< " ";
	 }

	return  0;
}