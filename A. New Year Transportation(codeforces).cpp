#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    while(cin>>n>>t)
    {
        int arr[n+20],i,sum=1;
        for(i=1;i<n;i++)
        {
            cin>>arr[i];
        }
        while(sum<t)
        {
            sum+=arr[sum];
            i++;
        }
        if(sum==t)
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

