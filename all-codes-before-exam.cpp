#include <bits/stdc++.h>
using namespace std;         


/////////// trees
class Node{
public:

	int data;
	Node* left;
	Node* right;

	Node(int val){
		data =val;
		left =NULL;
		right =NULL;
	}
};


// tree traversal DFS 

// preorder ---------------
// root L R

void pretrav(Node* root){

	if(root==NULL){return;}

	cout<<root->data;

	pretrav(root->left);
	pretrav(root->right);

}

// postoder traversal reur

void postOder(Node* root){
	if(root ==NULL){
		return;
	}

	postOder(root->left);
	postOder(root->right);

	cout<< root->data;

}

void inOder(Node* root)
{
	if(root==NULL) return;

	inOder(root->left);
	cout<< root->data;
	inOder(root->right);
}


// level order traversal

void levelordertrav(Node* root){

	if(root==NULL){
		cout<<"empty";
	}

	// create a quque
	queue<Node* > q;
	q.push(root);

	while(!q.empty() ){

		// top
		Node * top = q.front();
		cout<<top->data;
		q.pop();

		if(top->left !=NULL){
			q.push(top->left);
		}
		if(top->right !=NULL){
			q.push(top->right);
		}




	}
}

////// search for a node

Node* searchforaNode(Node* root ,int val){

	// if root.data ==val or root NULL(val is not found);
	
	if(root== NULL ){
		return NULL;
	}
	
	if(root->data == val ){
		return root;
	}


	if( root->data > val){
		return searchforaNode(root->left , val);
	}

	return searchforaNode(root->right , val);
}

////////insert a node

void insert(int key)


{

	//create a new node to insert

	Node* temp = new Node(key);
	Node* current = root;
	Node* prev = NULL;

	while(current != NULL)
	{
		prev = current;

		if(key > current->data )
		{
			current = current->right;
		}

		else if(key < current->data)
		{
			current = current->left;
		}

		else if(key == current->key)
		{
		cout<<'duplicate keys are not allowed'<<endl;
		return;
		}
	}


	if (prev == NULL) //if the tree is empty
	{
		root = temp;
	}

	//if key is greater insert at the right
	else if (key > prev->data)
	{
		prev->right = temp;
		
	}
	//if key is smaller insert at the left
	else if (key < prev->data)
	{
		prev->left = temp;
		
	}
	
}


/////delete a node from a tree

void Delete ( int key){

	//if the root is null
	if ( root ==NULL){

		cout<< "the tree is empty";
	}

	//else go to the node that must be deleted
	else{

		Node* curr = root;
		Node* parent =  NULL;

		while( curr !=NULL && curr->data !=key ){


			//parent of the curr node
			parent = curr;
			//if the key is less than the curr move left
			if (  key < curr->data ){

				curr = curr->left;
			}
			//if the key is grater than the curr move right
			else if (  key > curr->data ){

				curr = curr->right;
			}
		}
	}

	//if the curr is ponted to null that means there is no key value
	if (curr ==NULL){
		cout<<"there is no such key to delete";
	}


	//else

	//case 1 : the key is in a leaf node
	else{

		

		if( curr->left ==NULL && curr->right ==NULL){

			//if the corr is the root
			if ( curr ==root){
				root  == NULL;
			}

			//else if we want to delete the node and it is the left node 
			//of the parent
			else if ( curr->data < parent->data ){

				parent ->left =NULL;
			}

			else if ( curr->data > parent->data ){

				parent ->right =NULL;
			}
			
		}
	}

	//case 2 : id the deleting node have a right child or a tree
	if( curr -> left ==NULL){

		
		if ( curr->data < parent->data){

			curr->right = parent->left;
		}
		else if ( curr->data >parent->data){

			curr->right = parent ->right;
		}
	}

	//case 2 : id the deleting node have a lett child or a tree
	if( curr -> right ==NULL){

		
		if ( curr->data < parent->data){

			curr->left = parent->left;
		}
		else if ( curr->data >parent->data){

			curr->left = parent ->right;
		}
	}


	//case 03: if the deleting node has both left and right childs or tres
	else{

		//find the max in the left tree of the roota as curr
		Node* max = curr->left;
		Node* parentMax =NULL;

		while( max ->right != NULL){

			parentMax = max;
			max = max ->right;
		}

		//copy the value of the max with the curr val
		curr->data = max->data;
		max->data = -1;
		//delete the duplicate
		Delete( -1);

	}
}



////graphs



/////////adj matrix

class Graph {
private:
    int num_vertices;
    vector<vector<int>> adj_matrix;

public:
    Graph(int num_vertices) {
        this->num_vertices = num_vertices;
        adj_matrix.resize(num_vertices, vector<int>(num_vertices, 0));
    }

    void addEdge(int src, int dest) {
        adj_matrix[src][dest] = 1;
        adj_matrix[dest][src] = 1;
    }

    void printGraph() {
        for (int i = 0; i < num_vertices; i++) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (int j = 0; j < num_vertices; j++) {
                if (adj_matrix[i][j] == 1) {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph();

    return 0;
}

/////////adj list


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



//weighted dirr graphs

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



///traversal /

/// bfs and dfs

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