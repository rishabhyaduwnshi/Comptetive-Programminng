#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v, int u)
{
    graph[v].push_back(u);
}

void topologicalSort(vector<int> graph[], int indergree[], int vertices)
{
    queue<int> q;
    for(int i=0; i<vertices; i++)
    if(indergree[i] == 0)
    q.push(i);
    
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        
        for(int x: graph[u])
        {
            indergree[x]--;
            if(indergree[x] == 0)
            q.push(x);
        }
    }
    
    
}





void findIndegree(vector<int> graph[], int vertices)
{
    int indergree[vertices] = {0};
    
    for(int i=0;i<vertices;i++)
    {
        for(int x: graph[i])
        indergree[x]++;
    }
    
    topologicalSort(graph,indergree,vertices);
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
    findIndegree(graph,v);
    
}
