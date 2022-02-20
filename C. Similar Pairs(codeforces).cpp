#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[100],i,odd=0,even=0,f=0,r=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2) even++;
            else odd++;
        }
        if(even%2)
        {
            sort(&arr[0],&arr[n]);
            for(i=0;i<n-1;i++)
            {
                if(arr[i]+1==arr[i+1])
                {
                    f=1;
                    break;
                }
            }
            if(f) r=1;
            else r=0;
        }
        else r=1;
        if(r) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
