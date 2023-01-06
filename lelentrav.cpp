#include <bits/stdc++.h>
using namespace std;

// node

class Node{
public:
	int data;
	Node* left;
	Node* right;


	Node(int val){

		data=val;
		left= NULL;
		right=NULL;
	}
};


vector<int> levelTrav(Node* root){

	 
	 vector <int> ans;
	 


	if(root ==NULL	){
		return ans;
	}
	// psuh the data to the queue
	queue<Node*> q;
	q.push(root);

	//iterate through the size of the queue is not empty

	while(!q.empty()){

		for (int i = 0; i < q.size(); i++)
		{
			// store the front node
			Node* frontItem = q.front();
			q.pop();

			if(frontItem->left !=NULL){
				q.push(frontItem->left);

			}
			if(frontItem->right !=NULL){
				q.push(frontItem->right);

			}

			ans.push_back(frontItem->data);

			
		}

		

		


	}
	return ans;

}











// void print_queue(queue<int> q)
// {
//     // queue<int> temp = q;
//     while (!q.empty()) {
//         cout << q.front()<<" ";
//         q.pop();
//     }
//     cout << '\n';
// }

int main(){

	// crete a node
	Node* root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);

	
vector<int> asd =	levelTrav(root);
 for (auto &itr : asd){
	 	cout<< itr;
	 }


	// queue<int>q;
	// q.push(1);
	// q.push(2);

	// q.push(3);

	// q.push(4);

	// print_queue(q);

	// q.pop();

	// print_queue(q);



	return 0;
}