#include<bits/stdc++.h>
using namespace std;
#define limit 110
struct nodes
{
    int node;
    int cost;
};
vector<nodes>vec[limit];
bool visited[limit];
void reset()
{
    for(int i=0; i<limit; i++)
    {
        visited[i]=0;
        vec[i].clear();
    }
}
class cmp
{
public:
    bool operator()(nodes a,nodes b)
    {
        return (a.cost>b.cost);
    }
};
int dijkstra(int source,int t)
{
    int cnt=0;
    priority_queue<nodes,vector<nodes>,cmp>pq;
    pq.push({source,0});
    while(!pq.empty())
    {
        nodes current=pq.top();
        pq.pop();
        if(!visited[current.node])
        {
            if(current.cost<=t) cnt++;
                else break;
            visited[current.node]=1;
            for(int i=0; i<vec[current.node].size(); i++)
            {
                nodes next=vec[current.node][i];
                if(!visited[next.node])
                {
                    pq.push({next.node,current.cost+next.cost});
                }
            }
        }
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    for(int j=0; j<t; j++)
    {
        reset();
        int node,destination,edges,i,Time;
        cin>>node>>destination>>Time>>edges;
        for(i=0; i<edges; i++)
        {
            int u,v,cost;
            cin>>u>>v>>cost;
            vec[v].push_back({u,cost});
        }
        int x=dijkstra(destination,Time);
        if(j!=0)
            cout<<endl;
        cout<<x<<endl;
    }
    return 0;
}
/*
2
4
2
1
8
1 2 1
1 3 1
2 1 1
2 4 1
3 1 1
3 4 1
4 2 1
4 3 1
4
2
1
8
1 2 1
1 3 1
2 1 1
2 4 1
3 1 1
3 4 1
4 2 1
4 3 1
*/
