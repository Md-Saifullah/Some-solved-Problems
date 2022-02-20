#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[10000],i,k,l,c;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n-2; i++)
        {
            for(c=0,l=n-1,k=i; k<=l; l--)
            {
                if(a[k]==a[l])
                {
                    k++;
                    c++;
                }
            }
            if(c>1)
            {
                cout<<"Yes\n";
                c=-1;
                break;
            }
        }
        if(c!=-1)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
