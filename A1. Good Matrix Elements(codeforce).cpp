#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        long long sum=0;
        int a[n+10][n+10],i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i][i]+a[n/2][i]+a[i][n/2]+a[n-1-i][i];
        }
        cout<<sum-(3*a[n/2][n/2])<<endl;
    }
    return 0;
}

