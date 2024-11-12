#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;
bool isCyclic(int src,unordered_map<int,bool>&visited,
unordered_map<int,list<int>>&adj){
    unordered_map<int,int>parent;
    parent[src]=-1;// parent for first node is -1
    visited[src]=true;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto neighbour: adj[curr]){
            if(visited[neighbour] && neighbour!=parent[curr])
            return true;
            else if(!visited[neighbour]){
                q.push(neighbour);
                visited[neighbour]=true;
                parent[neighbour]=curr;
            }
        }
    }
    return false;

}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    unordered_map<int,list<int>>adj; // create adjacent node list 
    for(int i=0;i<m;i++){ // run for loop for all edges to creta eadjacency list 
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    unordered_map<int,bool>visited;
    // we run for loop of all nodes for disconnected graph
    bool b;
    for (int i = 0; i < n; i++) {
        if(!visited[i])
        b=isCyclic(i,visited,adj);
        if(b)return "Yes";
    }
    return "No";
    
}
