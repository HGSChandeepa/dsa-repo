#include <bits/stdc++.h>
using namespace std;


//selection sort

//>> select minimums 

void selectionSort( int arr[] , int n){

	for (int i = 0; i < n-1; i++)
	{
		int minInd = i;

		for( int j = i ; j<n ;j++){

			if( arr[minInd] > arr[j]){
				minInd = j;
			}
		}


		//address 
		int temp = arr[minInd];
		arr[minInd] = arr[i];
		arr[i] = temp;
	}
}
// t and s 
// 2 nested loops O[N2] ad no memo s = O(1)

// bubble sort

void bubbleSort( int arr[] , int n){
	
	for (int i = n-1 ; i >=1 ; i--){

		for( int j =0 ; j<=i ; j++){

			if(arr[j] > arr[j+1]){

				int temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}

void bubbleSortimproved( int arr[] , int n){

	int swaping=0 ;
	for (int i = n-1 ; i >=1 ; i--){

		for( int j =0 ; j<=i ; j++){

			if(arr[j] > arr[j+1]){

				int temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = temp;
			}
		}

		if ( swaping ==0){
			break;
		}
}

}

void bubble ( int arr[] , int n){

	for (int i = 0; i < n-1; ++i)
	{
		for( int j =0 ; j< n-1-i ;j++){

			if(arr[j] > arr[j+1]){

				int temp = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
// t and s 
// 2 nested loops O[N2] ad no memo s = O(1)


//insertion sort

void insertionSort( int arr[] , int n){

	for (int i = 0; i < n; ++i)
	{
		int j =i;

		while ( j>0 && arr[j-1] >arr[j]){

			 int temp = arr[j-1];
			 arr[j-1] = arr[j];
			 arr[j] = temp;

			 j--;
		}
	}
}




//merge sort

//merge array function

void merge ( int arr[] , int l ,int mid , int r){

	//create the array sizes
	int n1 = mid - l +1;
	int n2 = r -mid;

	//crete the arrays
	int L[n1] ;
	int  M[n2] ;

	//intitialize the arrays for the elememnts
	for (int i = 0; i < n1; ++i)
	{
		L[i] = arr[l+i];
	}
	for ( int i = 0 ; i< n2 ;i++){
		M[i] = arr[mid+i+1];
	}

	//merge the two arrays
	int k=l; int i =0 ; int  j =0;
	//new array
	// int newArr[n1+n2];

	while ( i< n1 && j< n2){

		if ( L[i] <=M[j]){
			arr[k] = L[i];
			k++;
			i++;
		}
		else{
			arr[k] = M[j];
			k++;
			j++;
		}



	}

	while ( i< n1){
		arr[k] = L[i];
		i++;
		k++;
	}

	while ( j< n2){
		arr[k] = M[j];
		j++;
		k++;
	}


}

//go untill it gives only one node and the merge them in sortedd order


void mergeSort( int arr[] , int l , int r  ){

	//divide in to halfs
	if( l<r){
		int mid = (l+r) /2;

		mergeSort( arr , l , mid);
		mergeSort ( arr , mid+1 , r);

		//then merge
		merge( arr , l ,mid , r);
	}
}
//quick sort
void swap (	int *a , int *b){

	int t = *a;
	*a =*b;
	*b=t;
}


int partiton (int arr[] , int low  , int high ){

	//make the pointers
	int pivot = arr[high];
	int greater = low-1;
	// int i;
	for (int i = low; i < high; ++i)
	{
		if ( arr[i] < pivot){

			greater++;

			swap(&arr[greater] , &arr[i]);
		}
	}

	//swap the pivot
	swap( &arr[greater+1] , &arr[high]);

	return greater+1;
}



void quickSort (int arr[] , int low , int high){

	if ( low < high){

		int piv = partiton(arr ,low ,high);

		quickSort(arr , low , piv-1);
		quickSort(arr , piv+1 , high);
	}
}


//heap sort

int main(){


	//int nee[] ={1,2,3,4,5};

	int arr[] = {13,4,1,54,35};
	// selectionSort( arr ,5);
	
	//bubbleSortimproved( nee , 5);
	// insertionSort( arr , 5);

	// mergeSort(arr ,0 ,4);

	quickSort(arr , 0 ,4);

	for (int i = 0; i < 5; ++i)
	{
		cout<< arr[i] <<" ";
	}


	return 0;
}