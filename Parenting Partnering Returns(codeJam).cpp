#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c;
    cin>>t;
    for(c=1;c<=t;c++)
    {
        int n,i,j,k,l;
        cin>>n;
        int s[1500],e[1500];
        for(i=1;i<=n;i++)
        {
            cin>>s[i]>>e[i];
        }
        for(i=1;i<=n;i++)
        {
            l=0;
            for(j=i+1;j<=n;j++)
            {
                if(s[j]>s[i]&&s[j]<e[i])
                {
                    l++;
                }
            }
            if(l>1)
            {
                k=1;
                break;
            }
        }
        if(k==1)
        {
            cout<<"Case #"<<c<<": IMPOSSIBLE\n";
        }
        else
        {

        }
    }
}
