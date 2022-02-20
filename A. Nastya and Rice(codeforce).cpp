#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d,x,y,s,m;
        cin>>n>>a>>b>>c>>d;
        x=a-b;
        y=a+b;
        s=c-d;
        m=c+d;
        if(n*x<=m&&n*y>=s)
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

