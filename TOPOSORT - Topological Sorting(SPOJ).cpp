#include<bits/stdc++.h>
using namespace std;
vector<int>result;
int visited[10000+20];
bool x=true;
vector<int> graph[10000+20];
void dfs(int source)
{
    visited[source]=1;
    sort(graph[source].begin(),graph[source].end());
    for(int i=graph[source].size()-1; i>=0; i--)
    {
        if(visited[graph[source][i]]==1)
        {
            x=false;
            return;
        }
        if(visited[graph[source][i]]==0)
        {
            dfs(graph[source][i]);
        }
    }
    visited[source]=2;
    result.push_back(source);
}
int main()
{
    int nodes,edges,i;
    cin>>nodes>>edges;
    for(i=0; i<edges; i++)
    {
        int task,preTask;
        cin>>preTask>>task;
        graph[preTask].push_back(task);
    }
    for(i=nodes; i>0; i--)
    {
        if(visited[i]==0)
        {
            dfs(i);
            if(x==false)
            {
                cout<<"Sandro fails.";
                return 0;
            }
        }
    }
    //reverse(result.begin(),result.end());
    for(i=result.size()-1; i>=0; i--)
    {
        if(i==0)
        cout<<result[i];
        else
            cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}

