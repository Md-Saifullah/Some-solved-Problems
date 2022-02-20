#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int a,b,c,d,x,y,x1,y1,x2,y2,s=0;
        cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
        if((x==x1&&x1==x2&&a!=0&&b!=0)||(y==y1&&y1==y2&&c!=0&&d!=0))
        {
            s=1;
        }
        else
        {
            if(a>b)
            {
                if((a-b)>(x-x1))
                {
                    s=1;
                }
            }
            else
            {
                if((b-a)>(x2-x))
                {
                    s=1;
                }
            }
            if(c<d)
            {
                if((d-c)>(y2-y))
                {
                    s=1;
                }
            }
            else
            {
                if((c-d)>(y-y1))
                {
                    s=1;
                }
            }
        }
        if(s==0)
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
