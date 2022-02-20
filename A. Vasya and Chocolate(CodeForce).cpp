#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long s,a,b,c,d;
        cin>>a>>b>>c>>d;
        s=(a/d)+(((a/d)/b)*c);
        cout<<s<<endl;
    }
    return 0;
}
