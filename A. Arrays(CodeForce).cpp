#include<bits/stdc++.h>
using namespace std;
int main()
{
    int na,nb;
    while(cin>>na>>nb)
    {
        int i,k,m,a[100000],b[100000];
        cin>>k>>m;
        for(i=1;i<=na;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=nb;i++)
        {
            cin>>b[i];
        }
        if(a[k]<b[nb-m+1])
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
