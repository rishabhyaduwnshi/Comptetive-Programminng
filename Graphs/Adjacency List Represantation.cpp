#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v, int u)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}


void printGraph(vector<int> graph[], int v)
{
    for(int i = 0;i<v;i++)
    {
        cout<<i<<" -->";
        for(auto it: graph[i])
        cout<<it<<" ";
        cout<<endl;
    }
    
}


int main()
{
    int v = 4;
    vector<int> graph[v];
    addEdge(graph,0,1);
    addEdge(graph,2,1);
    addEdge(graph,2,0);
    addEdge(graph,1,3);
    
    printGraph(graph,v);
    
}
