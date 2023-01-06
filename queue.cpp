#include <bits/stdc++.h>
using namespace std;
#define size 5
// create a queue from arrays(FIFO)
//we want 2 pointers front and rare 
// isfull isempty enqueue dequeue print

class Queue{
private:

	int items[size] , front ,rare;

	// CONATRUCTOR
public:
	Queue(){
		front=-1;
		rare=-1;
	}

	 // isfull

	bool isFull(){
		if(front ==0 && rare == size-1){
			return true;
		}
		else{
			return false;

		}
	}

	// isempty

	bool isEmpty(){
		if(front==-1){
			return true;
		}
		else{
			return false;
		}
	}

	// enqueue (enter to queue)
	// here after entering we have to maintain a counter and check it wiht the size

	void enQueue(int data){

		if(isFull()){
			cout<<"full";
		}
		else{
			if(front ==-1){
				front =0;
			}
			
			rare++;

			items[rare] = data;



		}
	}

	// dequeue(remove from the qqueue)
	// first we have to queue is empty
	// we have to check the front and arr[front++] and finally set
	// 

	void deQueue(){

		if(isEmpty()){
			cout<<"empty";
		}
		else{

			cout<<"deleted:"<< items[front]<<"\n";
			if(front >= rare){
				front = rare =-1;
			}
			else{

				// if(front <size)
				// front++;
				// else{
				// 	front =0;
				// }

				// here the front can overtake rare so we can use
				front = (front+1)%size;

				//now when the front comes to the size it will be set to 0; 
			}

		}


	}

	void display(){
		if(isEmpty()){
		cout<<"empty";
		}
		else{

			for(int i=front ;i<=rare;i++){

				cout<< items[i]<< " ";

			}
		}
	}
};
 



int main(){

	// create a ob of class Queue

	Queue newq ;
	newq.enQueue(1);
	newq.enQueue(2);
	newq.enQueue(3);
	newq.enQueue(4);
	newq.enQueue(5);
	newq.display();
	newq.deQueue();
	newq.display();



 	
 	
	
	return 0;
}