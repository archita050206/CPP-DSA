#include<iostream>
#include<queue>
using namespace std;
struct Node{
    string name;
    int pr;
    Node(){}
    Node(string n,int p){
        name=n;
        pr=p;
    }
    bool operator <(const Node &other)const{
        return pr<other.pr;
    }
};
int main(){
    priority_queue<Node>pq;
    
    int n;
    cin>>n;
    string str;
    int pr;
    for(int i=0;i<n;i++){
        cin>>str>>pr;
        pq.push(Node(str,pr));
    }
    while(!pq.empty()){
        Node curr=pq.top();
        pq.pop();
        cout<<curr.name<<" "<<curr.pr<<" ";
    }
}