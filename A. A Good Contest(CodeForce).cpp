#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        string a;
        int b,c,d=0,i;
        for(i=0; i<n; i++)
        {
            cin>>a>>b>>c;
            if(b>=2400&&c>b)
            {
                d=1;
            }
        }
        if(d==1)
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
