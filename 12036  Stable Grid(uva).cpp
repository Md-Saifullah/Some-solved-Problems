#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c;
    int a[100000];
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        for(int j=0; j<n*n; j++)
        {
            cin>>a[j];
        }
        for(int l=0; l<n*n; l++)
        {
            c=0;
            for(int k=0; k<n*n; k++)
            {
                if(a[l]==a[k])
                {
                    c++;
                }
            }
            if(c>n)
            {
                goto l;
            }
        }
l:
        if(c>n)
        {
            cout<<"Case "<<i<<": "<<"no"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"yes"<<endl;
        }

    }
    return 0;
}
