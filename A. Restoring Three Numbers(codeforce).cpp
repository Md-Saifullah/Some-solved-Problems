#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m;
    while(cin>>a>>b>>c>>d)
    {
        m=max(d,max(c,max(a,b)));
        if(m==a)
        {
            cout<<m-b<<" "<<m-c<<" "<<m-d<<endl;
        }
        else if(m==b)
        {
            cout<<m-a<<" "<<m-c<<" "<<m-d<<endl;
        }
        else if(m==c)
        {
            cout<<m-a<<" "<<m-b<<" "<<m-d<<endl;
        }
        else
        {
            cout<<m-a<<" "<<m-b<<" "<<m-c<<endl;
        }
    }
    return 0;
}
