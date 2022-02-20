#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,same,msame,d,a,b;
        cin>>n;
        if(n==1)
        {
            cin>>a;
            cout<<0<<endl;
        }
        else if(n==2)
        {
            cin>>a>>b;
            cout<<1<<endl;
        }
        else
        {
            int a[n];
            for(i=0; i<n; i++)
            {
                cin>>a[i];
            }
            sort(&a[0],&a[n]);
            same=1;
            msame=1;
            d=1;
            for(i=1; i<n; i++)
            {
                if(a[i-1]==a[i])
                {
                    msame++;
                }
                else
                {
                    d++;
                    msame=1;
                }
                same=max(msame,same);
            }
            if(same<d)
            {
                cout<<same<<endl;
            }
            else if(d<same)
            {
                cout<<d<<endl;
            }
            else
            {
                cout<<d-1<<endl;
            }
        }
    }
    return 0;
}

