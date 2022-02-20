#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    while(cin>>n>>s)
    {
        int a,b,t=0;
        while(n--)
        {
            cin>>a>>b;
            t=max(t,a+b);
        }
        t=max(t,s);
        cout<<t<<endl;
    }
    return 0;
}

