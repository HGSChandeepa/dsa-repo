#include <bits/stdc++.h>
using namespace std;
#define size 5
// stacks create > using arrays and linkedlists
// push / pop / top / showtop /empty / displaystack



//> LIFO


// stacks using arrays
class StackARRAY{
public:
	int top;
	int stackarr[size];

	StackARRAY(){
		top =-1;
	}

	// check the stack is empty

	bool isEmpty(){
		if( top ==-1){
			return true;
		}

		else{
			return false;
		}
	}

	// push to the sack
	void push(int data){

		if(top == size-1){

			cout<<"stack is full";
		}

		else{

			//make top to 0
			top++;
			stackarr[top] = data;

		}

	}
	// print the stack

	void printStack(){

		if(isEmpty()){
			cout<<"stack is empty";
		}

		else{
			for (int i = 0; i <= top; ++i)
			{
				cout<< stackarr[i] <<" ";
			}
		}
	}

	// pop from the stack

	void pop(){

		if(isEmpty()){
			cout<<"stack is empty";
		}

		else{

			
			top--;

		}
	}

	// top of a stack

	void topELE(){
		if(isEmpty()){
			cout<<"satck is empty";
		}
		else{
		
		cout<< stackarr[top];

		}
	}

};




int main(){

	StackARRAY s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.printStack();
	s.pop();

	cout<<"\n";
	s.topELE();





}
