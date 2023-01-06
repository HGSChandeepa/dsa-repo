#include <bits/stdc++.h>
using namespace std;

// arrays

// linked list > insert (top end after a given node)
// delet (top end after a given node)
// reverse

// stacks (using arrays and inkedl lists)
// queues (using arrays and linked lists)

// recursion
// trees ( insert / delet /search)
// tree treaversal ( bfs >> level order travresal)
// (dfs >> inoder / preoder /post order)
// AVL and BST and RBT



int main(){

	//arrays
    //cretae a array of user defined size

    int size;
    cout << "enter size:";
    cin >> size;
    //the size of the array should be known at the compile time cannot specified at the run time
    //int array1[size];
    // using the dynamic memo allocation
    // we can use new >> for allocation of memo and delet for remove the alocated memo

    int* array2 = new int[size];

    //crate a  and print the array

    for (int i = 0; i < size; i++)
    {
        cout << "array2[" << i << "]";
        cin >> array2[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << array2[i];
    }

    //de allocate the memory using delet

    delete[]array2;
    array2 = NULL;


    return 0;

	
}