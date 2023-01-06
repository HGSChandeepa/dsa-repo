#include <bits/stdc++.h>
using namespace std;




// Given a binary grid of n*m. Find the distance of the nearest 1 in the grid for each cell.
// The distance is calculated as |i1  - i2| + |j1 - j2|, where i1, j1 are the row number and 
// column number of the current cell, and i2, j2 are the row number and column number of the 
// nearest cell having value 1.

// >> the  place of 1 will aiways be 0.
// >> make all places as 1 to 0;
// >>

// |i1  - i2| + |j1 - j2|


vector<vector<int>>nearest(vector<vector<int>>grid){

	// find n and m
	int row = grid.size();
	int col = grid[0].size();
	int val ,zrow ,zcol ,orow ,ocol ;


	vector<vector<int>> ans;

// for rows
	for (int i = 0; i < row; ++i)
	{
		// cols
		 for (int j = 0; j < col; ++j)
		 {
		    // check for 0 and
		 	if(grid[i][j] ==0){

		 		zrow =i;
		 		zcol =j;

		 		`
		 	} 


		 }
	}

	return ans;


}


int main(){

	vector<vector<int>>grid = {{0,1,1,0},{1,1,0,0},{0,0,1,1}};


	// int row = grid.size();
	// int col = grid[0].size();

	// for (int i = 0; i < row; ++i)
	// {
	// 	// cols
	// 	 for (int j = 0; j < col; ++j)
	// 	 {
		 
	// 	 grid[i][j] =1;


	// 	 }

	// 	 cout<<"\n";
	// }

	// for (int i = 0; i < row; ++i)
	// {
	// 	// cols
	// 	 for (int j = 0; j < col; ++j)
	// 	 {
		 
	// 	 cout<< grid[i][j];


	// 	 }

	// 	 cout<<"\n";
	// }

	return 0;
}