#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long sum=0,diff=0,x,y,a,b;
        cin>>x>>y>>a>>b;
        x=abs(x);
        y=abs(y);
        diff=max(x,y)-min(x,y);
        if(a==b)
        {
            sum=max(x,y)*a;
        }
        else if(a>b)
        {
            sum+=min(x,y)*b+diff*a;
        }
        else
        {
            if(a<=b/2)
            {
                sum=(x+y)*a;
            }
            else
            {
                sum=min(x,y)*b+diff*a;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}


