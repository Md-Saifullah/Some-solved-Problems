#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,s,c,mc=0,a[n+50],j,m=1,k;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                s=i;
            else
                m=0;
        }
        if(m)
            goto l;
        for(k=0,i=s,j=s+1,c=1;k<n-1; i++,j++,k++)
        {
            i=i%n;
            j=j%n;
            if(a[i]==1&&a[j]==1)
            {
                c++;
            }
            else
            {
                c=1;
            }
            mc=max(mc,c);
        }
l:
        cout<<mc<<endl;
    }
    return 0;
}
