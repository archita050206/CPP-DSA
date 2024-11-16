#include <iostream>
#include <climits>
using namespace std;
// You are using GCC
void add_edge(int adj[][100], int src, int dest)
{
    // Type your code
    adj[src][dest] = 1;
    adj[dest][src] = 1;
}

bool BFS(int adj[][100], int src, int dest, int v, int pred[], int dist[])
{
    // Type your code

    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
    int q[100];
    int front = 0;
    int rear = 0;
    visited[src] = true;
    q[rear++] = src;
    while (front != rear)
    {
        int curr = q[front++];

        for (int i = 0; i < v; i++)
        {
            if (adj[curr][i] == 1 && !visited[i])
            {
                visited[i] = true;
                dist[i] = dist[curr] + 1;
                pred[i] = curr;
                q[rear++] = i;
                if (i == dest)
                    return true;
            }
        }
    }
    return false;
}

void printShortestDistance(int adj[][100], int s, int dest, int v, int pred[], int dist[])
{
    // Type your code
    int arr[100];
    int length = 0;
    for (int i = dest; i != -1; i = pred[i])
    {
        arr[length++] = i;
    }
    cout << "Shortest path length is: " << length - 1 << endl;
    cout << "Path is: ";
    for (int i = length - 1; i >= 0; i--)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
int main()
{
    int v, e;
    cin >> v;

    int adj[100][100] = {0};

    cin >> e;

    for (int i = 0; i < e; i++)
    {
        int src, dest;
        cin >> src >> dest;
        add_edge(adj, src, dest);
    }

    int source, dest;
    cin >> source >> dest;

    int pred[v], dist[v];

    if (BFS(adj, source, dest, v, pred, dist))
        printShortestDistance(adj, source, dest, v, pred, dist);

    return 0;
}