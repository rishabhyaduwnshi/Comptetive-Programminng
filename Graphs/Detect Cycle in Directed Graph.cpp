#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v, int u)
{
    graph[v].push_back(u);
}

bool isCycle(vector<int> graph[], int start, int visited[], int recSt[])
{
    visited[start] = 1;
    recSt[start] = 1;
    
    for(int x: graph[start])
    {
        if(visited[x] == 0 && isCycle(graph,x,visited,recSt))
        return true;
        
        else if(recSt[x] == 1)
        return true;
    }
    recSt[start] = 0;
    return false;
}



bool DFS(vector<int> graph[], int vertices)
{
    int visited[vertices] = {0};
    int recSt[vertices] = {0};
    
    for(int i=0;i<vertices;i++)
    {
        if(visited[i] == 0)
            if(isCycle(graph,i,visited,recSt) == true)
                return true;
    }
    return false;
}





int main()
{
    int v = 4;
    
    vector<int> graph[v];
    
    addEdge(graph,0,1);
    addEdge(graph,2,1);
    addEdge(graph,2,3);
    addEdge(graph,1,3);
    
    
    cout<<DFS(graph,v);
    
}
