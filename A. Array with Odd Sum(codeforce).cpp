#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,odd=0,even=0;
        cin>>n;
        if(n%2)
        {
            //for odd;
            for(i=0; i<n; i++)
            {
                int a;
                cin>>a;
                if(a%2)
                {
                    odd++;
                }
            }
            if(odd==0)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
        else
        {
            for(i=0; i<n; i++)
            {
                int a;
                cin>>a;
                if(a%2)
                {
                    odd++;
                }
                else
                {
                    even++;
                }
            }
            if(odd>0&&even>0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
