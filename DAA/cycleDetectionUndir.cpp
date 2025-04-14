#include<iostream>
#include<vector>
using namespace std;

bool isCycle(int node, vector<vector<int>>&adj, vector<bool>&visited, int parent ){
visited[node]=true;
for(auto it: adj[node]){
    if(it!=parent){
        if(visited[it])return true;
        if(!visited[it] && isCycle(it,adj,visited,node))
        return true;
    }
}
return false;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    vector<bool>visited(n,false);
    bool cycle=false;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!visited[i] &&  isCycle(i,adj,visited,-1)){
            cycle=true;
        }
    }
    if(cycle){
        cout<<"Cycle present";
    }
}