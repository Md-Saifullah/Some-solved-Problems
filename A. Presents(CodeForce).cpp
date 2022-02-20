#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,s,m[200];
        for(i=1;i<=n;i++)
        {
            cin>>s;
            m[s]=i;
        }
        for(i=1;i<=n;i++)
        {
            cout<<m[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
