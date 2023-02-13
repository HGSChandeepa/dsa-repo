#include <bits/stdc++.h>
using namespace std;         




class Graph{
  public:

    int numVertices;
    list<int> *adjLists;
    
    Graph(int v){
        numVertices =v;
        adjLists = new list<int> [v];
            
    }

    //add edge;
    void addEdge ( int v , int u){
        adjLists[v].push_back(u);
        adjLists[u].push_back(v);

    }


    //print grapg
    void printGraph(){

        for (int i = 0; i < numVertices; ++i)
        {

            cout << i <<":";
            for ( auto k: adjLists[i]){
                cout<< k<< " ";
            }

            cout << endl;
        }


    }

    



    
};   
            
int main(){



    Graph g(4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(1,3);
    g.addEdge(0,1);


    g.printGraph();




   






return 0;
}