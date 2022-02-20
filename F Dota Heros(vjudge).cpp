#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j=0,n,m,d,a[1000];
        cin>>n>>m>>d;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            while(a[i]>d)
            {
                a[i]=a[i]-d;
                j++;
            }

        }
        /*for(i=0;i<m;i++)
        {
            sort(&a[0],&a[n]);
            if(a[n-1]>d)
            {
                a[n-1]=a[n-1]-d;
            }
            else
            {
                i=-1;
                break;
            }
        }*/
        if(j<m)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
return 0;
}
