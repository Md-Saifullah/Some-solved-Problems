#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,s,m;
        cin>>a>>b>>c;
        m=max(a,max(b,c));
        if(m==a)
        {
            s=b+c;
        }
        else if(m==b)
        {
            s=a+c;
        }
        else
        {
            s=a+b;
        }
        if(s<m-1)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"Yes\n";
        }
    }
    return 0;
}
