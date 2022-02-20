#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,d=0,p,c,a,b;
        cin>>n;
        cin>>p>>c;
        if(p<c)
        {
            d=1;
        }
        for(i=1; i<n; i++)
        {
            cin>>a>>b;
            if(a<b||a<p||b<c||a-p<b-c)
            {
                d=1;
            }
            p=a;
            c=b;
        }
        if(d==1)
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
