#include <bits/stdc++.h>
using namespace std;    /// approach wagera thikk hain answer galat aa raha hain baad me dekhta hun 
# define V 5 

int findmin(int key[V] , bool visitset[V]) {
	int min = INT_MAX;
	int min_index;
	for (int i = 0 ; i < V ; i++) {
		if (visitset[i] == false && key[i] < min) {
			min = key[i];
			min_index = i;
		}
	}
	return min_index;
}

void printmst(int parent[V] , int graph[V][V]){
	for(int i=0 ; i<V ; i++){
		cout<<parent[i]<<"-"<<i<<graph[i][parent[i]]<<endl ; 
	}
}
void pimsalgo(int graph[V][V]) {
	int key[V];
	int parent[V];
	bool visitset[V];
	for (int i = 0 ; i < V ; i++) {
		key[i] = INT_MAX;
		visitset[i] = false ;
	}
	key[0] = 0;
	parent[0] = -1 ;
	for (int count = 0 ; count < V - 1; count++) {
		int u = findmin(key , visitset);
		visitset[u] = true ;
		for (int v = 0 ; v < V ; v++) {
			if (graph[u][v] && visitset[v] == false && graph[u][v] < key[v]) {
				key[v] = graph[u][v];
				parent[v] = u;
			}
		}

	}
	printmst(parent , graph);
}

int main() {
	 int graph[V][V] = { { 0, 2, 0, 6, 0 }, 
                        { 2, 0, 3, 8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, 8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 } }; 
 
    // Print the solution 
    pimsalgo(graph); 
 
    

	return 0 ;
}