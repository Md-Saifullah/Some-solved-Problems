#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int i,j,a[n+10][n+10],s=1,sum=0;
        for(i=1; i<k; i++)
        {
            for(j=1; j<=n; j++)
            {
                a[j][i]=s;
                s++;
            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=k; j<=n; j++)
            {
                a[i][j]=s;
                s++;
            }
            sum+=a[i][k];
        }
        cout<<sum<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
