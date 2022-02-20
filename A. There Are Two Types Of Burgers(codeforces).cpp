#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,p,h,c,s=0;
        cin>>a>>b>>p>>h>>c;
        a/=2;
        if(h>=c)
        {
            if(a>b)
            {
                s+=b*h;
                a-=b;
                s+=min(a,p)*c;
            }
            else
            {
                s+=a*h;
            }
        }
        else
        {
            if(a>p)
            {
                s+=p*c;
                a-=p;
                s+=min(a,b)*h;
            }
            else
            {
                s+=a*c;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
