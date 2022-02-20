#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m,i;
        cin>>x>>n>>m;
        i=0;
        while(i<n&&x/2>=10)
        {
            x=((x/2)+10);
            if(x<=m*10)
            {
                break;
            }
            i++;
        }
        if(x<=m*10)
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

