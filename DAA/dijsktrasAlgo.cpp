#include <iostream>
#include<vector>
#include<climits>
using namespace std;

int minIndex(vector<int>dist, vector<bool>visited, int V){
    int minVal=INT_MAX;
    int minIndex=-1;
    for(int i=0;i<V;i++){
        if(!visited[i] && dist[i]<minVal){
            minVal=dist[i];
            minIndex=i;
        }

    }
    return minIndex;
}

void dijkstra(vector<vector<int>>graph, int V, int src){
    vector<bool>visited(V,false);
    vector<int>dist(V,INT_MAX);
    dist[src]=0;
    for(int i=0;i<V-1;i++){
         int min=minIndex(dist,visited,V);
         if(min==-1)break;
         visited[min]=true;

         for(int v=0;v<V;v++){
            if(graph[min][v] && !visited[v] && dist[min]!=INT_MAX && dist[min]+graph[min][v]<dist[v] ){
                dist[v]=graph[min][v]+dist[min];
            }
         }
    }
    cout<<"Distance of each node from source: ";
    for(int i=0;i<V;i++){
        cout<<i<<": "<<dist[i]<<" ";
    }
}
int main(){
    int V = 5;
    vector<vector<int>> graph = {
        {0, 10, 0, 5, 0},
        {0, 0, 1, 2, 0},
        {0, 0, 0, 0, 4},
        {0, 3, 9, 0, 2},
        {0, 0, 6, 0, 0}};

    int src = 0;
    dijkstra(graph, V, src);
}