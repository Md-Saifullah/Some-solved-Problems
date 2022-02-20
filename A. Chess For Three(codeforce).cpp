#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a=1,b=2,c,f=0,s=3,temp;
        while(n--)
        {
            cin>>c;
            if(a==c)
            {
                temp=b;
                b=s;
                s=temp;
            }
            else if(b==c)
            {
                temp=a;
                a=s;
                s=temp;
            }
            else
            {
                f=1;
            }
        }
        if(f)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}
