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
void reset(int check)
{
    for(int i=0; i<limit; i++)
    {
        visited[i]=0;
        if(check)
        {
            vec[i].clear();
        }
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
bool dijkstra(int source,int destination,int t)
{
    priority_queue<nodes,vector<nodes>,cmp>pq;
    pq.push({source,0});
    while(!pq.empty())
    {
        nodes current=pq.top();
        if(current.node==destination)
        {
            if(current.cost<=t)
                return true;
            break;
        }
        pq.pop();
        if(!visited[current.node])
        {
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
    return false;
}
int main()
{
    int c,j=0;
    cin>>c;
    while(c--)
    {
        reset(1);
        int node,source,destination,edges,result=0,i,t;
        cin>>node>>destination>>t>>edges;
        for(i=0; i<edges; i++)
        {
            int u,v,cost;
            cin>>u>>v>>cost;
            vec[u].push_back({v,cost});
        }
        for(i=1; i<=node; i++)
        {
            bool x=dijkstra(i,destination,t);
            if(x)
                result++;
            reset(0);
        }
        if(j!=0)
            cout<<endl;
        cout<<result<<endl;
        j=1;
    }
    return 0;
}
