#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int>*adj,int u,int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}
void printg(vector<int>*adj,int v){
for(int i=0;i<v;i++){
	cout<<i<<"-> ";
	for(auto x:adj[i])
		cout<<x<<" ";
	cout<<endl;
}
}
int main(){
	int v;
	cout<<"enter no. of vertices in graph";
	cin>>v;
	vector<int>adj[v];
	addEdge(adj,0,1);
	addEdge(adj,0,2);
	addEdge(adj,1,2);
	addEdge(adj,2,3);
	addEdge(adj,1,3);
	addEdge(adj,0,3);
	addEdge(adj,0,5);
	addEdge(adj,6,3);
	addEdge(adj,4,1);
	//addEdge(adj,2,0);
	//addEdge(adj,1,0);
	//addEdge(adj,2,1);
	//addEdge(adj,3,2);

	//printing the graph
	printg(adj,v);
return 0;
}