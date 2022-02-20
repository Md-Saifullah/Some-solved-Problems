#include<bits/stdc++.h>
using namespace std;
struct nodes
{
    int node;
    int cost;
};
struct dist
{
    int node;
    int cost;
};
vector<nodes> graph[1000];
bool visited [1000];
vector<dist> dis;
class cmp
{
public:
    bool operator()(nodes a,nodes b)
    {
        return (a.cost>b.cost);
    }
};
void dijkstra(int source)
{
    priority_queue<nodes,vector<nodes>,cmp> pq;
    pq.push({source,0});
    while(!pq.empty())
    {
        nodes curr=pq.top();
        pq.pop();
        if(!visited[curr.node])
        {
            visited[curr.node]=true;
            dis.push_back({curr.node,curr.cost});
            for(int i=0; i<graph[curr.node].size(); i++)
            {
                pq.push({graph[curr.node][i].node,graph[curr.node][i].cost+curr.cost});
            }
        }
    }
}
int main()
{
    int node,edges,i,source;
    cin>>node>>edges;
    for(i=0; i<edges; i++)
    {
        int u,v,cost;
        cin>>u>>v>>cost;
        graph[u].push_back({v,cost});
    }
    cout<<"enter the source node: ";
    cin>>source;
    dijkstra(source);
    for(i=0; i<dis.size(); i++)
    {
        cout<<dis[i].node<<" node's cost is: "<<dis[i].cost<<endl;
    }
    return 0;
}
