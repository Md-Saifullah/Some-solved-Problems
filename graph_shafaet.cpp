#include<bits/stdc++.h>
using namespace std;
struct wc
{
    int n;
    int c;
};
bool cmp(wc a,wc b)
{
    if(a.c>b.c)
        return true;
    else if(a.c==b.c)
    {
        if(a.n<b.n)
        {
            return false;
        }
        return true;
    }
    else
        return false;
}
int main()
{
    int nodes,edges,cost,i,n,e,k;
    cin>>nodes>>edges;
    vector<wc>arr[nodes+5];
    for(i=0; i<edges; i++)
    {
        cin>>n>>e>>cost;
        arr[n].push_back({e,cost});
    }
    cout<<endl<<"Output"<<endl;
    for(i=0; i<nodes; i++)
    {
        sort(arr[i].begin(),arr[i].end(),cmp);
        cout<<i<<" ";
        for(int l=0; l<arr[i].size(); l++)
        {
            cout<<arr[i][l].n<<" ";
        }
        cout<<endl;
    }
}
