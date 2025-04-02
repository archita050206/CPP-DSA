#include <iostream>
#include<climits>
using namespace std;
#define V 5

int minKey(int key[], bool visited[]){
    int min=INT_MAX;
    int minIndex=-1;
    for(int i=0;i<V;i++){
        if(!visited[i] && key[i]<min){
            min=key[i];
            minIndex=i;
        }
    }
    return minIndex;
}

void primMST(int graph[V][V]){
    int parent[V];
    int key[V];
    bool visited[V];
    for(int i=0;i<V;i++){
        visited[i]=false;
        key[i]=INT_MAX;
    }
    key[0]=0;
    parent[0]=-1;
    for(int i=0;i<V-1;i++){ // a mst has v-1 edges
        int index=minKey(key,visited);
        visited[index]=true;
        for(int v=0;v<V;v++){
            if(graph[index][v] && !visited[v] && graph[index][v]<key[v] ){
                parent[v]=index;
                key[v]=graph[index][v];
            }
        }
    }
}
int main(){
    int graph[V][V]={
        {0,2,0,6,0},
        {2,0,3,8,5},
        {0,3,0,0,7},
        {6,8,0,0,9},
        {0,5,7,9,0}
        
    };
    primMST(graph);

}