// Program to print elements of set
#include <bits/stdc++.h>
using namespace std;

// we can find the predesessor and succssor using sets

// find the predesessor
set<int>s;

void predesessor(int num){

	// if the num is not in the set
	if(s.find(num) == s.end()){
		cout<<"num is not in the set";
		return;
	}
	// finding the num
	// cretea itr for the  set
	set<int>::iterator itr;
	// this is pointing a pointer to the num
	itr =s.find(num);

	// checking the itr is pointing to the first element so it have no predesessor

	if(itr==s.begin()){
		cout<< " no pre";
		return;
	}

	itr--;
	cout<< *itr ;
}

void succsessor(int num){

	// if the num is not in the set
	if(s.find(num) == s.end()){
		cout<<"num is not in the set";
		return;
	}
	// finding the num
	// cretea itr for the  set
	set<int>::iterator itr;
	// this is pointing a pointer to the num
	itr =s.find(num);

	// checking the itr is pointing to the first element so it have no predesessor

	if(itr==s.end()){
		cout<< " no succ";
		return;
	}

	itr++;
	cout<< *itr ;
}
int main()
{
	
	s.insert(5);
	s.insert(1);
	s.insert(6);
	s.insert(3);
	s.insert(7);
	

	 predesessor(89);
	 succsessor(3);
	

	return 0;
}
