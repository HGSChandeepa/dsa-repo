#include <bits/stdc++.h>
using namespace std;

// Node class

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


// inorder traversal of a binary tree both
// iterative and recursive methode

//         1      
//       /          
//     4    
//   /    \   
// 4       2
// l root r >> 4 4 2  1

// recursive methode

void printinOrder(Node* curr){

    // checking before entering

    if(curr ==NULL) return ;

    printinOrder(curr->left);
    
    cout<< curr->data;
    printinOrder(curr->right);

}


//iterative methode

vector<int> printinOrder2(Node* itr){
    vector<int> ans;
    stack<Node*>s;

    if(itr ==NULL) return ans;
    

    s.push(itr);

    while(!s.empty()){

        Node* top =s.top();
        s.pop();
        

        if(top->right !=NULL){
            s.push(itr->right);
        }
        ans.push_back(top->data);




        if(top->left !=NULL){
            s.push(itr->left);
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
   ans = printinOrder2(root);

   for (int i = 0; i < ans.size(); ++i)
   {
    cout<<ans[i]<<" ";
   }
  


    return 0;
}