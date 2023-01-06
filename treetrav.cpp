#include <bits/stdc++.h>
using namespace std;

// tree node clas
class Node{

public:
	int data;
	Node* left;
	Node* right;

	Node(int val){

		data =val;
		left =NULL;
		right =NULL;
	}

};

// insert to a bst
Node* insertNode(Node * root , int val){

	// if root is null we have to keep referrnce to the root
	// as we are returning the node
	Node* curr = root;
	Node* newNode =new node(val);
	if(curr == NULL	){
			return newNode;
		}

	while(curr){

		

		if( curr->data >= val){

			if(curr != NULL){
				
				curr= curr->left;

			}
			else{
				curr= newNode;

			}
		}
		else{
			if( curr !=NULL){
				 curr=curr->right;
			}

			else{
				curr = newNode;
			}
		}
	}

	return root;
}




// delete freom a bst
// search from a bst

Node* searchforaNode(Node* root ,int val){

	// if root.data ==val or root NULL(val is not found);
	
	if(root== NULL ){
		return NULL;
	}
	
	if(root->data == val ){
		return root;
	}


	if( root->data > val){
		return searchforaNode(root->left , val);
	}

	return searchforaNode(root->right , val);
}

// preoder trav recursivelly

void pretrav(Node* root){

	if(root==NULL){return;}

	cout<<root->data;

	pretrav(root->left);
	pretrav(root->right);

}

// postoder traversal reur

void postOder(Node* root){
	if(root ==NULL){
		return;
	}

	postOder(root->left);
	postOder(root->right);

	cout<< root->data;

}

void inOder(Node* root)
{
	if(root==NULL) return;

	inOder(root->left);
	cout<< root->data;
	inOder(root->right);
}



int main(){


	Node* root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);

	// pretrav(root);

	// cout<<"\n";

	// postOder(root);
	// cout<<"\n";

	// inOder(root);

	Node* s =searchforaNode(root , 5);
	cout<< s->data;

	return 0;

}