#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:

	
	int size ,capacity,front,rare;
	int* data;
	
	Queue(int cap){
		size =0;
		capacity=cap;
		data =new int[capacity];
		front=-1;
		rare =0;

	}


	 bool isEmpty(){


	if(front==-1){
		return true;
	}
	else{
		false;
		}
	}

	bool isFull(){
		if(size >= capacity){
			return true;
		}
		else{
			return false;
		}
	}

	// OTHER METHODE

	void enqueue(int value){
		if(isEmpty()){
			cout<<-1;
		}

		else{
			front=0;
			data[rare]=value;
			// here we start from 0 so rare++
			// rare =(rare+1)%capacity >>>> capacity isover taken
			rare ++;

		}






	}

	int dequeue(){
		if(size==0){
			
			cout<<"empty";
			return INT_MIN;
		}

		else{ 


			return data[front];
			front =(front+1)/capacity;
		}
	}
};

// isempty


int main(){

	Queue q;
	q.enqueue(10);

	for (int i = front; i < rare; ++i)
	{
		cout<<q[i];
	}

	return 0;
}






