#include <iostream>
using namespace std;
#define V 8
#define I 12345

void printMST(int T[][V-1], int G[V][V]){
    cout << "\nMinimum Spanning Tree Edges (w/ cost)\n" << endl;
    int sum {0};
    for (int i {0}; i<V-1; i++){
        int c = G[T[0][i]][T[1][i]];
        cout << "[" << T[0][i] << "]---[" << T[1][i] << "] cost: " << c << endl;
        sum += c;
    }
    cout << endl;
    cout << "Total cost of MST: " << sum << endl;
}

void PrimsMST(int cost[V][V], int n){
    int T[2][V-1];
    int u,v;
    int track[V];
    int min=I;
    for(int i=0;i<V;i++){
        track[i]=I;
        for(int j=i;j<V;j++){
            if(cost[i][j]<min){//searching minimum edge weight from adj matrix
                min=cost[i][j];
                u=i;
                v=j;
            }
        }
    }
    T[0][0]=u;
    T[1][0]=v;
    track[u]=track[v]=0;
    for(int i=1;i<V;i++){
        if(track[i]!=0){
            if(cost[i][u]<cost[i][v]){ // checking which other nodes are close to u or v
                track[i]=u; 
            }
            else track[i]=v;
        }
    }
    for(int i=1;i<V-1;i++){
        int k;
        int min=I;
        for(int j=1;j<V;j++){
            if(track[j]!=0 && cost[j][track[j]]<min){ //finding the minimum node k which gives shortest edge among all
                k=j;
                min=cost[j][track[j]];

            }
        }
        T[0][i]=k;
        T[1][i]=track[k];
        for(int j=1;j<V;j++){
            if(track[j]!=0 && cost[j][k]<cost[j][track[j]]){ // check if k gives a shorter connection to their current nearest
                track[j]=k;
            }
        }
    }
    printMST(T,cost);

}

int main(){
    int cost [V][V] {
        {I, I, I, I, I, I, I, I},
        {I, I, 25, I, I, I, 5, I},
        {I, 25, I, 12, I, I, I, 10},
        {I, I, 12, I, 8, I, I, I},
        {I, I, I, 8, I, 16, I, 14},
        {I, I, I, I, 16, I, 20, 18},
        {I, 5, I, I, I, 20, I, I},
        {I, I, 10, I, 14, 18, I, I},
};

int n = sizeof(cost[0])/sizeof(cost[0][0]) - 1;

PrimsMST(cost, n);

return 0;

}