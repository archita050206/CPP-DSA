#include<iostream>
#include<list>
#include<unordered_map>
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
}
