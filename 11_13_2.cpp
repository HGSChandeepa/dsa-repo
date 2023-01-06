#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node * left ;
    Node* right;

    Node(int val){
        data = val;
        left = right =NULL;

    }
    
};


// postorder traversal of a binary tree both
// iterative and recursive methode

//         1      
//       /          
//     4    
//   /    \   
// 4       2
// l r root >>4 2 4 1

//recursive methode

void printpostOrder(Node* curr){

	if(curr ==NULL) return;

	printpostOrder(curr->left);
	printpostOrder(curr->right);
	cout<< curr->data;
}

vector<int> printpostOrder2(Node* itr){
    vector<int> ans;
    stack<Node*>s;

    if(itr ==NULL) return ans;
    

    s.push(itr);

    while(!s.empty()){

        Node* top =s.top();
        s.pop();
       

        if(itr->right !=NULL){
            s.push(itr->right);
        }


        if(itr->left !=NULL){
            s.push(itr->left);
        }
         ans.push_back(top->data);

    }

    return ans;


}


int main(){

	  Node* root =new Node(1);
    root->left =new Node(4);
    

    root->left->left =new Node(4);
     root->left->right =new Node(2);

     // printpostOrder(root);
   printpostOrder(root);
 

	return 0;
}