#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        long long sum=0;
        int i,a[400000];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(&a[0],&a[n]);
        for(i=0;i<n/2;i++)
        {
            sum+=((a[i]+a[n-1-i])*(a[i]+a[n-1-i]));
        }
        cout<<sum<<endl;
    }
}
