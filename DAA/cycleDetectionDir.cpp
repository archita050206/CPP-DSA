#include<iostream>
#include<vector>
using namespace std;
bool isCycle(int node,vector<vector<int>>&adj, vector<bool>&visited,vector<bool>&stack  ){
    
    stack[node]=true;
    if(!visited[node]){
        visited[node]=true;
        for(auto it: adj[node]){
            if(!visited[it] && isCycle(it, adj,visited,stack)){
                return true;
            }
            if(stack[it])return true;
        }
    }
    stack[node]=false;
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    vector<bool>visited(n,false);
    vector<bool>stack(n,0);
    bool cycle=false;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        
    }
    for(int i=0;i<n;i++){
        if(!visited[i] && isCycle(i,adj,visited,stack))cycle=true; 
    }
    if(cycle)cout<<"Cycle is present";
    else cout<<"No cycle";
}