#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int f=0;
        if(c==0)
        {
            if(a==b)
            {
                f=1;
            }
        }
        else if(c>0)
        {
            if(a<=b)
            {
                if(((a-b)%c)==0)
                {
                    f=1;
                }
            }
        }
        else
        {
            if(a>=b)
            {
                if(((a-b)%c)==0)
                {
                    f=1;
                }
            }
        }
        if(f==1)
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
