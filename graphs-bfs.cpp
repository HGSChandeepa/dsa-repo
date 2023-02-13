#include <bits/stdc++.h>
using namespace std;         

class Graph{

public:
	//store the graph
	map< int , list < int>> l;


	//function to add a edge
	void addEdge( int v , int u){

		l[v].push_back(u);
		l[u].push_back(v);
	}

	//bfs
	void bfs(int node){

		map< int , bool> visited;
		queue< int > q;

		q.push(node); // fifo
		visited[node] = true;

		while(!q.empty()){


			//take the top of the queue
			int top = q.front();
			q.pop();

			cout<< top << " ";

			//print all the adj nodes in that level

			for (auto k : l[top]){

				if(!visited[k]){

					q.push(k);
					//mark as visited

					visited[k] = true;
				}
			}

		}




	}


//dfs

	//helper function

	void dfs_helper( int node , map <int , bool> &visited){

		//mark the node as visited
		visited[node] = true;
		cout<< node<< " " ;

		for ( auto  t : l[node]){

			if(!visited[t]){
				dfs_helper(t ,visited);
			}
		}
	}

	void dfs(int node){


		//visited map
		map< int , bool > visited;
		//mark all node /vertices as not visited

		for( auto k : l){

			int vertex = k.first;
			visited[vertex] = false;
		}

		dfs_helper( node , visited);



	}



};





int main(){



	Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.dfs(2);

	return 0;

}