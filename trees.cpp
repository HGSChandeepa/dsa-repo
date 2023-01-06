#include <bits/stdc++.h>
using namespace std;
// lelvel order travreasl

class Node
{
public:
	int data;
	Node* left ;
	Node* right;

	Node(int val){

		data =val;
		left=NULL;
		right=NULL;

	}
};

vector<int> levelorderTrav(Node* root){

	vector<int> ans;
	

	if (root==NULL)
	{
		return ans;
	}
	queue <Node*> q;
	q.push(root);

	// if q is unempty

	int count =1;
	while(!q.empty()){



		for(int i=0 ; i< q.size();i++){

			// add lrft and right to the queue if presnt
			Node* front =q.front();
			q.pop();
			
			if( front->left !=NULL){
				q.push(front->left);
			}


			if( front->right !=NULL){
				q.push(front->right);
			}
			ans.push_back(front->data);

		}


	}

	return ans;


}
int  maxDepth( Node* root){

	if( root ==NULL) return 0;
	queue <Node*> qu;
	int maxDepth =1;

	qu.push(root);

	while(!qu.empty()){

		

		for (int i = 0; i < qu.size(); ++i)
		{
			Node* top = qu.front();
			qu.pop();
			if (top->left != NULL)
			{
				qu.push(top->left);
			}

			if (top->right != NULL)
			{
				qu.push(top->right);
			}
			

		}
		 maxDepth++;
		
	}
 return maxDepth;
}

int maxDepthrecursion(Node* root) {
        
        if(root ==NULL) return 0;
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        return 1+ max(leftDepth , rightDepth);

}


int main(){


	Node* root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);

	
// vector<int> asd =	levelorderTrav(root);
//  for (auto &itr : asd){
// 	 	cout<< itr;
// 	 }

	cout<< maxDepthrecursion(root);
	return 0;
}