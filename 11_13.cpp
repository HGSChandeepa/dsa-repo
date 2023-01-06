#include <bits/stdc++.h>
using namespace std;
// preorder traversal of a binary tree both
// iterative and recursive methode

class Node
{
public:
    int data;
    Node * left ;
    Node *right;

    Node(int val){
        data = val;
        left = right =NULL;

    }
    
};



//         1      
//       /          
//     4    
//   /    \   
// 4       2
// root l r >> 1 4 4 2

// recursive methode

void printpreOrder(Node* curr){

	if(curr ==NULL) return;
	cout<< curr->data;

	printpreOrder(curr->left);
	printpreOrder(curr->right);

}


// iterative methode

vector<int> printpreOrder2(Node* itr){

	vector<int> ans;
	if( itr ==NULL) return ans;

	stack<Node*>s;
	s.push(itr);


	while(!s.empty()){
		Node* topnode = s.top();
		
		ans.push_back(topnode->data);
		s.pop();

		if(topnode->right !=NULL){
            s.push(topnode->right);
        }
        if(topnode->left !=NULL){
            s.push(topnode->left);
        }

	}
	return ans;	
}

int main(){

   Node* root =new Node(1);
   root->left =new Node(4);
   root->left->left =new Node(4);
   root->left->right =new Node(2);

   vector<int>ans;
   ans = printpreOrder2(root);

   for (int i = 0; i < ans.size(); ++i)
   {
   	cout<<ans[i]<<" ";
   }
  
return 0;

}