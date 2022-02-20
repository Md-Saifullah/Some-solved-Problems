#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,mn,mx,s;
    cin>>a>>b>>c>>d;
    mx=max(a,max(b,max(c,d)));
    mn=min(a,min(b,min(c,d)));
    s=a+b+c+d;
    cout<<((s-mx==mx||s-mn-mx==mn+mx)?"YES\n":"NO\n");
    return 0;
}


