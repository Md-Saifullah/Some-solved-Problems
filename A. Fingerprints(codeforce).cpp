#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a[100],b[100],i,j;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<m; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i]==b[j])
                {
                    cout<<a[i]<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
