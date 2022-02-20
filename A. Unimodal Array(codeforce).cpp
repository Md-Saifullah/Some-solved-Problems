#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int fin=0,fde=0,feq=0,i,a,b,f=0;
        cin>>a;
        for(i=1; i<n; i++)
        {
            cin>>b;
            if(f==1)
                continue;
            if(a<b)
            {
                if(fde!=0||feq!=0)
                {
                    f=1;
                    goto al;
                }
                fin=1;
            }
            else if(a==b)
            {
                if(fde!=0)
                {
                    f=1;
                    goto al;
                }
                feq=1;
            }
            else
            {
                fde=1;
            }
            al:
            a=b;
        }
        if(f==0)
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
