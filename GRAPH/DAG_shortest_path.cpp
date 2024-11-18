#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<stack>
#include<climits>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<pair<int,int>>>adj;
    void add(int u, int v, int weight){
        pair<int,int>p=make_pair(v,weight);
        adj[u].push_back(p);
    }
    void print(){
        for(auto i: adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<"["<<j.first<<" , "<<j.second<<"]";
            }
            cout<<endl;
        }
    }
    void dfs(int node,unordered_map<int,bool>&visited,stack<int>&topo){
    visited[node]=true;
    for(auto neighbour:adj[node]){
        if(!visited[neighbour.first]){
            dfs(neighbour.first,visited,topo);

        }
        topo.push(node);
    }
    }
    void getShortestPath(int src,vector<int>&dist,stack<int>&topo){
    dist[src]=0;
    while(!topo.empty()){
        int top=topo.top();
        topo.pop();
        if(dist[top]!=INT_MAX){
            for(auto i:adj[top]){
                if(dist[top]+i.second<dist[i.first])
                dist[i.first]=dist[top]+i.second;
            }
        }
    }
    }
};


int main(){
    Graph g;
    g.add(0,1,5);
    g.add(0,2,3);
    g.add(1,2,2);
    g.add(1,3,6);
    g.add(2,3,7);
    g.add(2,4,4);
    g.add(2,5,2);
    g.add(3,4,-1);
    g.add(4,5,-2);
    g.print();
    int n=6;
    unordered_map<int,bool>vis;
    stack<int>s;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            g.dfs(i,vis,s);
        }
    }
    int src=1;
    vector<int>distance(n);
    for(int i=0;i<n;i++){
        distance[i]=INT_MAX;
    }
    g.getShortestPath(src,distance,s);
    cout<<"Answer is: "<<endl;
    for(int i=0;i<distance.size();i++){
        cout<<distance[i]<<' ';
    }
    cout<<endl;
}