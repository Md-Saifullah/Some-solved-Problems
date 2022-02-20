#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        long long sum=0,msum=0;
        int a[n+50],i;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            msum+=a[i];
        }
        sum=msum;
        for(i=1;i<=n;i++)
        {
            sum-=a[i];
            if(sum<=msum/2)
            {
                break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}
