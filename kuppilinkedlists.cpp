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


// ---------------------------linked lists
// singlly linked list Node
class Node{
public:

	int data;
	Node* next;

	// constructor
	Node(int val){
		
		data =val;
		next =NULL;
	}
};

// create a linkedList class
class LinkedList{
public:

	Node* head;
	Node* tail;

	LinkedList(){
		head =NULL;
		tail =NULL;
	}
// --------------------------------------------------------
// printing /traversal last elem
	void printLinkedListlastelement(Node* head){

		if(head ==NULL) cout<< "empty";

		Node* curr = head;
		 while(curr!=NULL){

		 	// cout<< curr->data<<" ";
		 	curr= curr->next;
		 }
		  cout<< curr->data;

	}


// --------------------------------------------------------
	// printing /traversal
	void printLinkedList(Node* head){

		if(head ==NULL) cout<< "empty";

		Node* curr = head;
		 while(curr!=NULL){

		 	cout<< curr->data<<" ";
		 	curr= curr->next;
		 }
	}

// --------------------------------------------------
	// inserting at the begining

	void insertAtBeging( int value) {

		// if head is null crete the new node and make it as the head
		Node* newNode = new Node (value);

		if(head ==NULL){

			cout<<"empty";
		}

		else{
			newNode->next =head;
			head = newNode;

		}

	}

// --------------------------------------------------
	// inserting at the end

	void insertAttheEnding( int value){

		if (head ==NULL)
		{
			cout<<"empty";
		}

		// else go to the end of the linked list and insert

		Node * curr = head;
		Node* newNode = new Node( value);

		while(curr->next!= NULL){

			curr = curr->next;
		}
		curr->next = newNode;
		newNode ->next =NULL;

	}

// --------------------------------------------------
	// inserting after a  given node
	void insertAfterGivenNode(Node* prev , int val){

		if(head ==NULL){
				cout <<"empty";
		}

		else{
			Node* curr = head;
			Node* newNode = new Node(val);

			while(curr!= NULL){

				//check the equality
				if( curr ->data == prev->data){

					Node* temp ;
					temp =curr->next;
					curr->next = newNode;
					newNode ->next = temp;


				}

				curr = curr->next;
			}
		}
	}

// --------------------------------------------------
	// delete frst node

	void deleteFirstNode(){

		if(head ==NULL){
			cout << "empty";

		}

		else{
			head = head->next ;
		}
	}

// --------------------------------------------------
	// delete last node

	void deleteLastNode(){

		if(head ==NULL){
			cout <<"empty";
		}

		else{
			Node* curr = head;

			while(curr->next->next){
				curr = curr ->next;
			}

		     curr->next = NULL;

		}
	}


// --------------------------------------------------
	// delete after a given node

	void deleteAfterANode(Node* prev ){


	}


};



int main(){

	
	// crate the linked list 1> 2>3 >4 >5
	
	Node* first= new Node(1);
	Node* sec= new Node(2);
	Node* third	= new Node(3);
	Node* forth = new Node(4);
	Node* fifth = new Node(5);

	// create the links
	
	LinkedList l1;
	l1.head = first;
	l1.head->next = sec;
	sec->next =third;
	third->next = forth;
	forth->next = fifth;
	fifth->next = NULL;

	// l1.printLinkedList(l1.head);
	// cout<<endl;
	// cout<<"insert at top"<<endl;


	// l1.insertAtBeging( 10);
	// l1.printLinkedList(l1.head);

	// cout<<endl;
	// cout<<"insert at end"<<endl;
	// l1.insertAttheEnding(20);
	// l1.printLinkedList(l1.head);



	// cout<<endl;
	// cout<<"insert after a given node"<<endl;
	// l1.insertAfterGivenNode(sec , 101);
	// l1.printLinkedList(l1.head);


	
	// cout<< endl;
	// cout<<"delete the first node"<<endl;
	// l1.deleteFirstNode();
	// l1.printLinkedList(l1.head);

	// cout<< endl;
	cout<<"delete the last node"<<endl;
	l1.deleteLastNode();
	l1.printLinkedList(l1.head);
	// cout<<"last:";
	// l1.printLinkedListlastelement(l1.head);

	// cout<< endl;
	// cout<<"delete after a give node node"<<endl;
	


    return 0;

	
}