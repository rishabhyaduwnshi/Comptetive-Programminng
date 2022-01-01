#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v, int u)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}



void depthFirstSearch(vector<int> graph[], int start, int v)
{
    int visited[6+1] = {0};
    cout<<start<<" ";
    visited[start] = 1;
    
    for(auto it:graph[start])
    {
        if(visited[it] == 0)
        {
            depthFirstSearch(graph,it,v);
        }
    }
}
    


int main()
{
    int v = 7;
    vector<int> graph[v];
    addEdge(graph,0,1);
    addEdge(graph,1,2);
    addEdge(graph,2,3);
    addEdge(graph,0,4);
    addEdge(graph,4,5);
    addEdge(graph,4,6);
    addEdge(graph,5,6);
    
    depthFirstSearch(graph,0,v);
    
}
