#include <bits/stdc++.h>
using namespace std;

class GraphHash{

public:
	unordered_map< string  ,list< pair< string , int>>> l ;

	void addEdge(string x  , string y , bool bidir , int w){

		l[x].push_back(make_pair(y, w));
		//check bi directional
		if ( bidir){
			l[y].push_back(make_pair(x, w));

		}
	}

	void printGraph(){

		for ( auto i: l){

			string node = i.first;

			//print node

			cout<< node<< ":";
			list<pair< string , int>> edges = i.second;

			for ( auto k : edges){

				string s = k.first;
				int wt = k.second;

				cout << s << wt;

			}
			cout <<endl;
		}
	
	}
	
};



int main(){


	GraphHash g;
	g.addEdge( "A" ,  "B" , true ,20);
	g.addEdge( "S" ,  "A" , false ,220);
	g.addEdge( "K" ,  "B" , true ,40);
	g.addEdge( "J" ,  "D" , true ,50);
	g.addEdge( "A" ,  "B" , true ,10);

	g.printGraph();

	return 0;
}