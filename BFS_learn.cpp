#include<bits/stdc++.h>
using namespace std;
vector<int> graph[1000];
bool visited[1000];
int dis[1000];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    dis[source]=0;
    visited[source]=1;
    while(!q.empty())
    {
        source=q.front();
        q.pop();
        for(int i=0; i<graph[source].size(); i++)
        {
            int next=graph[source][i];
            if(visited[next]==0)
            {
                dis[next]=dis[source]+1;
                visited[next]=1;
                q.push(next);
            }
        }
    }
}
int main()
{
    int nodes,edges,source,i;
    cin>>nodes>>edges;
    for(i=0; i<edges; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cin>>source;

    bfs(source);
    for(i=1; i<=nodes; i++)
    {
        cout<<"Level of node: "<<i<<" is "<<dis[i]<<endl;
    }
    return 0;
}
