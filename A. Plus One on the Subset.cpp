#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long mn=1000000000,a,mx=0;
        cin>>n;
        while(n--)
        {
            cin>>a;
            mx=max(mx,a);
            mn=min(mn,a);
        }
        cout<<mx-mn<<endl;
    }
    return 0;
}
