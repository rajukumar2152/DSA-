  
#include<iostream>
#include  <map>
#include <list>
#include<queue>
using namespace std; 
class Graph {
public:
	map<int, list<int> > l;

void addedge(int x, int y ){
	l[x].push_back(y);
	l[y].push_back(x);

}

void dfshelper(int src, map<int ,bool>visited){
	
	// cout<<src<<" ";

	if(!(visited[src])){
		visited[src]=true;
		cout<<src<<" ";
		for(auto p:l[src]){
		dfshelper(p,visited);
	}
	
   }

}

void dfs(int src){
      // map<int ,int> l;
      // int node = l.first;
      map<int , bool > visited ;
      // queue<int> q;
      // q.push(src) ;
      visited[src]=false;
    
      
      		dfshelper(src,visited);
      	
    }  
 };
      
int main(){
	Graph g ;
    //g.addedge(0,1);
    //  g.addedge(0,7);
	g.addedge(0,3);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,4); 
	g.addedge(4,5);
	g.addedge(5,6);
	g.addedge(0,7);
	g.dfs(0);





	return 0;
}