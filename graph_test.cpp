#include<bits/stdc++.h>
using namespace std;
struct node{
    int v;
    int cost;
};
int main()
{
    //node arr[100];
    //arr[0].v=10;
    //arr[0].cost=20;
    int nodes,edges;
    cin>>nodes>>edges;
    vector <int> graph[nodes+1];
    for(int i=0; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<graph[i].size(); j++)
        {
            cout<<i<<" "<<graph[i][j]<<" "<<endl;
        }
    }
}
