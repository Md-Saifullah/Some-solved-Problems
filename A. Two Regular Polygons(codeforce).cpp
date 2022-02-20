#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,m;
        cin>>s>>m;
        cout<<((s%m)==0?"YES\n":"NO\n");
    }
    return 0;
}
