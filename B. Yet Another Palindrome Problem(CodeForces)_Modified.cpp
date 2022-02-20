#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[10000],i,j;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-2; i++)
        {
            for(j=i+2; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    cout<<"YES\n";
                    goto HELL;
                }
            }
        }
        cout<<"NO\n";
HELL:
    ;}
    return 0;
}
