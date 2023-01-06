#include <bits/stdc++.h>
using namespace std;

// node

class Node
{
public:
	int data;
	Node* next;
	

	Node(int val){

		data=val;
		next =NULL;
	}
};

// list clss
// create the print imsert and delete methodes
class LinkedList{
public:
	Node* head;
	LinkedList(){
		head =NULL;
	}

	// methodes

	// print

	void printList();
	// insert ai a given node
	void insertList(int);
	// delete a node
	void deleteList(int);

	void reverse();

	 Node* sortList(Node* head)
    {
        Node* max;
        Node* prev;
        Node * curr;

        prev =NULL;
        curr = head;
        max =head;
        prev->next =curr;


        while(curr){

        	if(curr-> data < prev->data){

        		curr-> next = prev;

        	}
        	if (curr-> data >= prev->data)
        	{
        		curr->next = head;
        	}
        	prev =curr;
        	curr = curr->next;

        }

        return head;

    }
};	

// defing methodes


// print
void LinkedList::printList(){

	Node* curr =head;
	if(head ==NULL){
		return;
	}

	while(curr){
		cout<< curr->data <<" " ;
		curr =curr->next;

	}
}

// // insert
// // 1 2 3 4 >> 3>5 >>>> 1 2 3 5 4
// void LinkedList::insertList(int val){

// 	Node* newNode = new Node(val);
// 	Node* curr = head;

// 	if(head ==NULL) return;

// 	while(curr){

// 		if(curr->data == val){

// 			Node* temp = curr->next;
// 			curr->next =newNode;
// 			newNode->next = temp;
			

// 			// break;

// 		}
// 		curr=curr->next;
// 	}

// }

// //delete 
// //  1 2 3 4 >>del 2 >>> 1 3 4
// void LinkedList::deleteList(int val){

// 	Node* curr =head;
// 	Node* dummy =NULL;
// 	dummy->next =head; 

// 	cout<<dummy->next->data;

// 	if(head ==NULL) return;
// 	Node* newNode = new Node(val);

// 	while(curr){

// 		if(curr->next->data == newNode->data){
			

// 			curr->next= curr->next->next;


// 		}

// 		curr= curr->next;
// 		// dummy=dummy->next;
// 	}

// }

void LinkedList:: reverse(){
	Node* prev =NULL;
	Node* front =NULL;
	Node*curr = head;



	if(head==NULL) return;

	while(curr){

		front = curr->next;
		curr->next = prev;
		prev = curr;
		curr =front;

	}
	 head =prev;
}


int main(){

	// create the linked list

	Node* first =new Node(1);
	Node* sec =new Node(-2);
	Node* third =new Node(3);
	Node* forth =new Node(-4);

	// linkedlist >> ob >>l

	LinkedList l;
	l.head = first;
	first->next = sec;
	sec->next = third;
	third-> next = forth;

	// l.reverse();
	l.sortList(l.head);
	l.printList();
	return 0;
}