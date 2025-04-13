#include<iostream>
#include<vector>
using namespace std;

void Print(vector<int>x){
    for(int i: x){
        cout<<i<<" ";
    }
    cout<<endl;
}

void NextVertex(vector<vector<int>>adj, vector<int>&x,int n, int s){
    do{
    x[s]=(x[s]+1)%(n);
    if(x[s]==0)return;
    if(adj[x[s]][x[s-1]]){
        int i=0;
        for(;i<s;i++){
            if(x[i]==x[s])break;

        }
        if(i==s){
            if(s<n-1 || (s==n-1)&& adj[x[s]][x[0]] ){
                return;
            }
        }
    }
}while(true);
}

void Hamiltonian(vector<vector<int>>adj, vector<int>&x,int n, int s){
    do{
        NextVertex(adj,x,n,s);
        if(x[s]==0)return;
        if(s==n-1)Print(x);
        else Hamiltonian(adj,x,n,s+1);
    }while(true);
}
int main(){

    int n=4;
    vector<vector<int>>adj= {
    {0, 1, 1, 1},
    {1, 0, 1, 1},
    {1, 1, 0, 1},
    {1, 1, 1, 0}
};

vector<int>x(n,0);
x[0]=0;
Hamiltonian(adj,x,n,1);
return 0;
}