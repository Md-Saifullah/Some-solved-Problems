#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long i,m,n,s,diff,k,l=0;
        cin>>n>>s;
        for(i=1; i<n; i++)
        {
            k=0;
            cin>>m;
            if(m<s)
            {
                diff=s-m;
                while(diff>0)
                {
                    diff/=2;
                    k++;
                }
            }
            else
            {
                s=m;
            }
            l=max(l,k);
        }
        cout<<l<<endl;
    }
    return 0;
}
