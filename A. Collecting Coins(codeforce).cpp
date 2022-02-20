#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n,s,f=1;
        cin>>a>>b>>c>>n;
        if(a>=b&&a>=c)
        {
            s=2*a-b-c;
        }
        else if(b>=a&&b>=c)
        {
            s=2*b-a-c;
        }
        else
        {
            s=2*c-b-a;
        }
        if(n>=s)
        {
            if((n-s)%3==0)
            {
                f=0;
            }
        }
        cout<<((f)?"NO\n":"YES\n");
    }
    return 0;
}
