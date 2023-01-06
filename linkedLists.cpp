#include <bits/stdc++.h>
using namespace std;

// node > data , next
// create a class to define a node
//  1 -> 2  -> 3 -> 4
class Node{
public:
	int data;
	Node* next;

	// constructor

	Node( int val){

		data =val;
		next =NULL;
	}

};

// create a class for a linkedlist

class LinkedList{
public:
	Node* head ;
	Node * tail ;

	LinkedList(){
		head = NULL;
		tail =NULL;
	}


// methodes
// print / insert (begin end at a place) / 
// delete (begin end at a given placce) / reverse 

// print / traversal

	void printList(){

		Node* temp;
		temp =head;

		while(temp!=NULL){

			cout<< temp->data<< " ";
			temp = temp ->next;
		}

	}

// insterting
	// insert at the beginig

	void insertAtBeging(int newval){

		if(head ==NULL){
			cout<< "LinkedList is empty";

		}

		else{

			Node* newNode =new Node(newval);
			newNode->next = head;
			head =newNode;
		}

	}

	// insert at the end

	// tial >> end >>NULL by using the tail
	

	void insertAtEndLong(int val){

		Node * newNode =new Node(val);
		if (head ==NULL)
		{
			head =newNode;

		}

		Node* temp;
		temp =head;
		while(temp->next ){
			temp = temp->next;
		}

		temp -> next =newNode;
		
	}

	// insert after a given node

	void insertAfterNode( Node* prev_node ,int newval){

		// go untill the given node
		Node* curr;
		curr = head;

		// new node
		Node* newNode = new Node(newval);

		while(curr !=NULL){

			if (curr == prev_node){
				Node* temp = curr ->next;
				curr->next = newNode;
				newNode -> next =temp;
			}
			curr = curr-> next;
		}
	}







	Node* sortList(Node* head)
    {
        Node* curr;
        Node* prev ;


        if(head ==NULL) return 0;

        curr = head->next;
        prev =head;

        while(curr){

        	if(curr->data < prev->data){

        		prev->next = curr->next;
        		curr =head;
        	}

        	curr = prev->next;


        }
        curr= curr->next;
        prev= prev->next;

    	 return head;
    }	












	int getMiddle(Node *head)
    {
        int count =0;
        Node * curr;
        curr =head;
        int mid;

        if (head ==NULL) return 0;
        while(curr){


        	curr=curr ->next;
        	count++;
        }

        int index = count/2 ;

        curr =head;

        while(index--){

        	curr=curr->next;
		}

		mid = curr ->data;




        return mid ;
    }
};



int main(){

	// create a linkedlist object l1
	Node* first =new Node(1);
	Node* sec =new Node(-2);
	Node* third =new Node(3);
	Node* forth =new Node(-4);

	// linkedlist >> ob >>l

	LinkedList l1;
	l1.head = first;
	first->next = sec;
	sec->next = third;
	third-> next = forth;
	forth->next =l1.tail;

	// 
	// l1.printList();
	// l1.insertAtBeging(10);
	// cout<< '\n';
	// l1.printList();
	// // 
	// l1.insertAtEndLong(10);
	// cout<< '\n';
	// l1.printList();
	// // 
	// cout<< '\n';
	// cout<<l1.getMiddle(l1.head);
	// // 
	// cout<< '\n';
	// l1.insertAfterNode(forth, 33);
	l1.sortList(l1.head);
	l1.printList();
	
	return 0;

}