#include <bits/stdc++.h>
using namespace std;

// tree node
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


// tree traversal DFS 

// preorder ---------------
// root L R

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


// level order traversal

void levelordertrav(Node* root){

	if(root==NULL){
		cout<<"empty";
	}

	// create a quque
	queue<Node* > q;
	q.push(root);

	while(!q.empty() ){

		// top
		Node * top = q.front();
		cout<<top->data;
		q.pop();

		if(top->left !=NULL){
			q.push(top->left);
		}
		if(top->right !=NULL){
			q.push(top->right);
		}




	}
}


// insert a node

Node* insertNode(Node* root , int value){

	Node* newNode = new Node (value);
	if( root ==NULL){
		return newNode;
	}

	Node* curr = root;

	while(curr){

		if( curr->data >= value){

			if(curr->left !=NULL){
				curr =curr ->left;
			}
			else{
				curr->left =newNode;
				break;
			}
		}

		else{
			if(curr->right !=NULL){
				curr = curr->right;
			}
			else{
				curr->right = newNode;
				break;
			}
		}
	}

	return root;
}

// search for a node

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

	insertNode(root , 12);
	pretrav(root);



	

	return 0;

}