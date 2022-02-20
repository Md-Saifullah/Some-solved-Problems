#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int a[1000],c=0,i,nc=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        if(a[k]==0)
        {
            for(i=k;i>0;i--)
            {
                if(a[i]!=0)
                {
                    break;
                }
                nc++;
            }
        }
        else
        {
            for(i=k+1;i<=n;i++)
            {
                if(a[k]!=a[i])
                {
                    break;
                }
                c++;
            }
        }
        cout<<k+c-nc<<endl;
    }
    return 0;
}
