#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>>adj;
    //direction=0 ->undirected
    //direction=1 ->undirected
    void addEdge(int node1, int node2, bool direction){

        //i can go from node 1 to node 2
        //i can only go fro 2 to 1 if it is undirected

        adj[node1].push_back(node2);
        if(direction==0) adj[node2].push_back(node1);

    }
    void printAdjList(){
        for(auto i: adj){
            cout<<i.first<<" -> ";
            for(auto j: i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

vector<int> bfsTraversal(int n){
    // Write your code here.
    vector<int>result;

    vector<bool>isVisited(n,false);
    queue<int>q;
    //start bfs from node 0
    
    for(int i=0;i<n;i++){
        if(!isVisited[i]){
            q.push(i);
            isVisited[i]=true;
        
    while(!q.empty()){
       int curr= q.front();
       q.pop();
       // add the current node to vector
       result.push_back(curr);
       //traverse all the adjacent nodes of curr
        for(auto neighbour:adj[curr]){
            if(!isVisited[neighbour]){
                q.push(neighbour);
                isVisited[neighbour]=true;
            }
        }
    }
    }
    }
    return result;
}
};
int main(){
    int n,m;
    cout<<"Enter the number of nodes: ";
    cin>>n;
    cout<<"Enter the number of edges: ";
    cin>>m;
    Graph g;
    for(int i=0;i<m;i++){
        int node1, node2;
        cin>>node1>>node2;
        g.addEdge(node1,node2,0);
    }
    g.printAdjList();
    cout<<endl;
    vector<int>v=g.bfsTraversal(n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
}
