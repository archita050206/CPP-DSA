#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;
bool checkCycledfs(int node, unordered_map<int,bool>&visited,unordered_map<int,bool>&dfsVisited,
unordered_map<int,list<int>>&adj){
visited[node]=true;
dfsVisited[node]=true;
for(auto neighbour: adj[node]){
  if(!visited[neighbour]){
    bool cycle=checkCycledfs(neighbour,visited,dfsVisited,adj);
    if(cycle)return true;
  }
  else if(dfsVisited[neighbour])return true;

}
dfsVisited[node]=false;
return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  unordered_map<int,list<int>>adj;
  for(int i=0;i<edges.size();i++){
    int u=edges[i].first;
    int v=edges[i].second;
    adj[u].push_back(v);
  }
  unordered_map<int,bool>visited;
  unordered_map<int,bool>dfsVisited;
  for(int i=1;i<=n;i++){
    if(!visited[i]){
      if(checkCycledfs(i,visited,dfsVisited,adj))return 1;
    }
  }
  return 0;
}