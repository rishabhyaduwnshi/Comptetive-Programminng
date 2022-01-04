#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v, int u)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}

bool isCycle(vector<int> graph[], int start, int visited[], int parent)
{
    visited[start] = 1;
    
    for(int x:graph[start])
    {
        if(visited[x] == 0)
            {
                if(isCycle(graph,x,visited,start))
                return true;
            }
        else if(x != parent)
            return true;
    }
    return false;
}




int main()
{
    int v = 6;
    int visited[v+1] = {0};
    
    vector<int> graph[v];
    addEdge(graph,0,1);
    addEdge(graph,0,5);
    addEdge(graph,5,4);
    addEdge(graph,1,4);
    addEdge(graph,1,2);
    addEdge(graph,2,3);
    
    
    cout<<isCycle(graph,0,visited,-1);
    
}
