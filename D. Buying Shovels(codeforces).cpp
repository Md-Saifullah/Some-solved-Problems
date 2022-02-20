#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,r=1,i,j=0;
        cin>>n>>k;
        if(n<=k)
        {
            cout<<1<<endl;
        }
        else
        {
            for(i=2; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    if((n/i)<=k)
                    {
                        cout<<i<<endl;
                        r=0;
                        break;
                    }
                    if(i<=k)
                        j=i;
                }
            }
            if(r)
                if(j==0)
                    cout<<n<<endl;
                else
                    cout<<n/j<<endl;
        }
    }
    return 0;
}
