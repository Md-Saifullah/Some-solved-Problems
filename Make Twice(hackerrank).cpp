#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a=>b||a<0||b<0)
        {
            cout<<"-1\n";
        }
        else
        {
            x=b-(2*a);
            if(x<0)
            {
                cout<<"-1\n";
            }
            else
            {
                cout<<x<<endl;
            }
        }
    }
    return 0;
}
