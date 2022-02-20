#include<bits/stdc++.h>
using namespace std;
vector<int>result;
bool visited[10000+20];
vector<int> graph[10000+20];
void dfs(int source)
{
    if(visited[source]==0)
    {
        visited[source]=1;
        for(int i=0;i<graph[source].size();i++)
        {
            if(visited[graph[source][i]]==0)
            {
                dfs(graph[source][i]);
            }
        }
    }
    result.push_back(source);
}
int main()
{
    int nodes,edges,i;
    cin>>nodes>>edges;
    for(i=0;i<edges;i++)
    {
        int task,preTask;
        cin>>preTask>>task;
        graph[preTask].push_back(task);
    }
    for(i=nodes;i>0;i--)
    {
        if(visited[i]==0)
        {
            dfs(i);
        }
    }
    //reverse(result.begin(),result.end());
    for(i=result.size()-1;i>=0;i--)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}
