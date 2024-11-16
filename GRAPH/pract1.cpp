#include<iostream>
#include<unordered_map>
#include<queue>
#include<vector>
#include<list>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>>adj;
    void addEdge(int node1, int node2, int dir){
        adj[node1].push_back(node2);
        if(dir==0){
            adj[node2].push_back(node1);
        }
    }
    void display(){
        for(auto i: adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<' ';
            }
            cout<<endl;
        }
        cout<<endl;
    }
    vector<int>bfs(int n){
        queue<int>q;
        vector<int>ans;
        vector<bool>isVisited(n,false);
        q.push(0);
        isVisited[0]=true;
        
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            ans.push_back(curr);
            for(auto i:adj[curr]){
            if(!isVisited[i]){
                q.push(i);
                isVisited[i]=true;
            }
            }
        }
        
        return ans;
    }
};
int main(){
    graph g;
    int n,e;
    cout<<"Edges: ";
    cin>>e;
    cout<<"Nodes: ";
    cin>>n;
    for(int i=0;i<e;i++){
        int n1,n2;
        cin>>n1>>n2;
        g.addEdge(n1,n2,0);

    }
    g.display();
    vector<int>v;
    v=g.bfs(n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
}