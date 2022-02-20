#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a,b,s,m;
        cin>>a>>b;
        s=b;
        m=s;
        n--;
        while(n--)
        {
            cin>>a>>b;
            s+=(b-a);
            m=max(s,m);
        }
        cout<<m<<endl;
    }
    return 0;
}
