#include <bits/stdc++.h>
using namespace std;

// null<-1 -><- 2 -><- 3 -><- 4 -><- 5 -> null

// node class
class Node{

public:
	int data;
	Node* next;
	Node* prev;

	// constructor
	Node(int val){

		data =val;
		next=NULL;
		prev=NULL;

	}
};

// class ddllinked list
class DoubllellyLList{

public:
	Node * head ;
	DoubllellyLList(){
		head =NULL;
	}

};





int main(){

	return 0;
}