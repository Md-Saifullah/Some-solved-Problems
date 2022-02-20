#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,m,f=0;
        cin>>a>>b>>c;
        m=max(a,max(b,c));
        if((a+b+c)==(2*m))
            f=1;
        else if((a==b&&!(c&1))||(c==b&&!(a&1))||(a==c&&!(b&1)))
            f=1;
        cout<<(f?"YES\n":"NO\n");
    }
}
