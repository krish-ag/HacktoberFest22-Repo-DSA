#include<bits/stdc++.h>
using namespace std;

bool BiDFS(int src,vector<int> adj[],int color[]){
    if(color[src]==-1){
        color[src]=1;
    }

    for(auto it: adj[src]){
        if(color[it]==-1){
            color[it]=1-color[src];
            if(!BiDFS(it,adj,color)){return false;}
        }
        else if(color[it]==color[src]){
            return false;
        }
    }
    return true;
}

bool checkBipartite(vector<int> adj[],int n){
    int color[n];
    memset(color,-1,sizeof color);
    for(int i =0;i<n;i++){
        if(color[i]==-1){
            if(!BiDFS(i,adj,color)){ 
                return false;
            }
        }
    }
    return true;
}


int main(){
    int n,m;
    cout<<"Enter the Vertex and Edges :-"<<endl;
    cin>>n>>m;
    vector<int> adj[n];
    for(int i =0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    if(checkBipartite(adj,n)){
        cout<<"Yes, the Graph is Bipartite "<<endl;
    }
    else{
        cout<<"No, the Graph is not a Bipartite"<<endl;
    }
}
