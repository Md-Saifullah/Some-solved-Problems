#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int j,i,n,x,a[1000];
        memset(a,0,2000);
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>j;
            a[j]++;
        }
        for(i=1;x>0;i++)
        {
            if(a[i]==0)
            {
                x--;
            }
        }
        for(j=i;a[j]>0;j++)
        {
        }
        cout<<j-1<<endl;
    }
    return 0;
}
