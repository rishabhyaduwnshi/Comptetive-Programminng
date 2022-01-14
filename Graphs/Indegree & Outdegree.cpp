#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v, int u)
{
    graph[v].push_back(u);
}


void topologicalSort(vector<int> graph[], int V)
{
    vector<int> indergree(V,0),outdegree;
    
    //For Finding outdergree
    for(int i=0;i<V;i++)
    {
        outdegree.push_back(graph[i].size());
    }
    
    
    //For Finding indergree
    for(int i=0;i<V;i++)
    {
        for(int x:graph[i])
        {
            indergree[x]++;
        }
    }

    
    
    for(int i=0;i<outdegree.size();i++)
    cout<<outdegree[i]<<" ";
    cout<<endl;
    
    
    for(int i=0;i<indergree.size();i++)
    cout<<indergree[i]<<" ";
}


int main()
{
    int v = 6;
    vector<int> graph[v];
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,3);
    addEdge(graph,2,3);
    addEdge(graph,3,4);
    addEdge(graph,3,5);
    
    topologicalSort(graph,v);
    
}

