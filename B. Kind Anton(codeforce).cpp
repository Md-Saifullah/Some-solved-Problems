#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[100000],b[100000],c1=0,c0=0,cn1=0,f=0,i;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }
        if(a[0]!=b[0])
        {
            f=1;
        }
        else
        {
            if(a[0]==0)
            {
                c0=1;
            }
            else if(a[0]==1)
            {
                c1=1;
            }
            else
            {
                cn1=1;
            }
            i=1;
            while(i<n&&(cn1==0||c1==0||c1==0))
            {
                if(a[i]==b[i])
                {
                }
                else if(a[i]>b[i])
                {
                    if(cn1==0)
                    {
                        f=1;
                        break;
                    }
                }
                else
                {
                    if(c1==0)
                    {
                        f=1;
                        break;
                    }
                }
                if(a[i]==0)
                {
                    c0=1;
                }
                else if(a[i]==1)
                {
                    c1=1;
                }
                else
                {
                    cn1=1;
                }
                i++;
            }
        }
        if(f==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
