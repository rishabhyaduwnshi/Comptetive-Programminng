
//Given a graph and a source vertex, find the distance of all nodes from source

#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[], int v, int u)
{
    graph[v].push_back(u);
    graph[u].push_back(v);
}


void breadthFirstSearch(vector<int> graph[], int start, int noOfNode)
{
    queue<int> q;
    int visited[noOfNode+1] = {0};
    
    int distance[noOfNode] = {0};
    distance[start] = 0;
    
    q.push(start);
    
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        
        cout<<x<<" ";
        visited[x] = 1;
        
        for(int i:graph[x])
        {
            if(visited[i] == 0)
            {
                visited[i] = 1;
                q.push(i);
                
                distance[i] = distance[x]+1;
            }
        }
    }
    
    cout<<endl;
    
    for(int i=0;i<noOfNode;i++)
    cout<<distance[i]<<" ";
    
}


int main()
{
    int v = 6;
    vector<int> graph[v];
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,0,4);
    addEdge(graph,1,3);
    addEdge(graph,2,3);
    addEdge(graph,2,4);
    addEdge(graph,3,5);
    addEdge(graph,4,5);
    
    
    breadthFirstSearch(graph,0,v);
    
}
