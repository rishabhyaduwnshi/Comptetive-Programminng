#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v, int u)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}


void breadthFirstSearch(vector<int> graph[], int start, int v)
{
    int visited[v+1] = {0};
    queue<int> q;
    
    visited[start] = 1;
    q.push(start);
    
    while(q.empty() == false)
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        
        
        for(auto it: graph[u])
        {
            if(visited[it] == 0)
            {
                visited[it] = 1;
                q.push(it);
            }
            
        }
    
    }
    
}


int main()
{
    int v = 6;
    vector<int> graph[v];
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,0,5);
    addEdge(graph,1,3);
    addEdge(graph,2,4);
    addEdge(graph,3,5);
    addEdge(graph,4,5);
    
    breadthFirstSearch(graph,1,v);
    
}
