#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0,i,n,a,b=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(a%2==0)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        if(b==i||c==i)
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
