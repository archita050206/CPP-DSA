#include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;

void dfs(int node,unordered_map<int,bool>&visited,
unordered_map<int,list<int>>&adj,vector<int>&component ){
    component.push_back(node);
    visited[node]=true;
    //recursive call for all connected nodes
    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour, visited,adj,component);
        }
    }

}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    unordered_map<int,list<int>>adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    
    vector<vector<int>>ans;
    unordered_map<int,bool>visited;
    for(int i=0;i<V;i++){
        vector<int>component;
        if(!visited[i]){
            dfs(i,visited,adj,component);
            ans.push_back(component);
        }
    }
    return ans;
}
