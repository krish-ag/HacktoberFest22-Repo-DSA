#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adjList,vector<bool> &visited,int source,int N){
	cout<<"Visited: "<<source<<endl;
	visited[source]=true;
	
	int totalNeighbour = adjList[source].size();
	
	for(int i=0;i<totalNeighbour;i++){
		int neighbourNode = adjList[source][i];
		
		if(visited[neighbourNode]==false){
			dfs(adjList,visited,neighbourNode,N);
		}
	}
}

int main(){
	
	int N=6;
	vector<bool> visited(N,false);
	vector<vector<int>> adjList(N);
	
	adjList[0].push_back(1);
	adjList[0].push_back(2);
	adjList[0].push_back(4);
	
	adjList[1].push_back(3);
	adjList[2].push_back(3);
	adjList[3].push_back(4);
	adjList[3].push_back(5);
	
	dfs(adjList,visited,0,N);
	return 0;
}
