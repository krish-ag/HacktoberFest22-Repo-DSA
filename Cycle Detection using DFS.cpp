#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<int> &vis,vector<int> adj[],int node,int parent){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it] &&dfs(vis,adj,it,node)){
            return true;
        }
        else if(it != parent){
            return true;
        }
    }
    return false;
}

bool cycleDFS(int n, vector<int> adj[]){
    vector<int> vis(n,0);
    for(int i =0;i<n;i++){
        if(!vis[i] && dfs(vis,adj,i,-1)){
            return true;
        }
    }
    return false;
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<int> adj[m];
    for(int i =0;i<n;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(cycleDFS(m,adj)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
