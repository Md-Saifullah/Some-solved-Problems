#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k,i,j,l,sum=0;
        cin>>n>>k;
        int a[100],b[100];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(&a[0],&a[n]);
        sort(&b[0],&b[n]);
        i=0;
        j=0;
        l=n-1;
        while(i<k&&i<n)
        {
            if(a[j]<b[l])
            {
                swap(a[j],b[l]);
                j++;
                l--;
            }
            i++;
        }
        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

