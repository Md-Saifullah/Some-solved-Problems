#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,r;
        cin>>a>>b;
        if(a>=b)
        {
            b=2*b;
        }
        else
        {
            a=2*a;
        }
        r=max(a,b)*max(a,b);
        cout<<r<<endl;
    }
    return 0;
}
