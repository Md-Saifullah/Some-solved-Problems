#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,sum=0,f,dig,nmax=-1000000000,pmax=0;
        cin>>n;
        cin>>dig;
        if(dig>0)
        {
            pmax=dig;
            f=1;
        }
        else
        {
            nmax=dig;
            f=-1;
        }
        for(i=1;i<n;i++)
        {
            cin>>dig;
            if(dig<0)
            {
                if(f==1)
                {
                sum+=pmax;
                pmax=0;
                }
                nmax=max(dig,nmax);
                f=-1;
            }
            else
            {
                if(f==-1)
                {
                    sum+=nmax;
                    nmax=-1000000000;
                }
                pmax=max(pmax,dig);
                f=1;
            }
        }
        if(f==1)
        {
            sum+=pmax;
        }
        else
        {
            sum+=nmax;
        }
        cout<<sum<<endl;
    }
    return 0;
}
