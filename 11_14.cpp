// C++ program to Merge Two Sorted Halves Of
// Array Into Single Sorted Array
#include <bits/stdc++.h>
using namespace std;

// Merge two sorted halves of Array into single
// sorted array
void mergeTwoHalf(int A[], int n)
{
	int half_i = 0; // starting index of second half

	// Temp Array store sorted resultant array
	int temp[n];

	// First Find the point where array is divide
	// into two half
	for (int i = 0; i < n ; i++) {
		if (A[i] > A[i + 1]) {
			half_i = i + 1;
			break;
		}
	}

	// If Given array is all-ready sorted
	if (half_i == 0)
		return;

	// Merge two sorted arrays in single sorted array
	int i = 0, j = half_i, k = 0;
	while (i < half_i && j < n) {
		if (A[i] < A[j])
			temp[k++] = A[i++];
		else
			temp[k++] = A[j++];
	}

	// Copy the remaining elements of A[i to half_! ]
	while (i < half_i)
		temp[k++] = A[i++];

	// Copy the remaining elements of A[ half_! to n ]
	while (j < n)
		temp[k++] = A[j++];

	for (int i = 0; i < n; i++)
		A[i] = temp[i];
}

// Driver code
int main()
{
	int A[] = { 2, 3, 8, -1, 7, 10 };
	int n = sizeof(A) / sizeof(A[0]);
	mergeTwoHalf(A, n);

	// Print sorted Array
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	return 0;
}
