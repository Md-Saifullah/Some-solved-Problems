#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    int arr[nodes+10][nodes+10];
    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            arr[i][j]=0;
        }
    }
    for(int i=0; i<edges; i++)
    {
        int u,v,cost;
        cin>>u>>v>>cost;
        arr[u][v]=cost;
        //arr[v][u]=cost;
    }
    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            if(arr[i][j]!=0)
            {
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
            }
        }
        //cout<<endl;
    }
    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
