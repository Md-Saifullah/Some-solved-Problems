#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,curLow,curPeak,i;
        cin>>n>>k;
        int arr[n+100],check[n+100];
        for(i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        check[1]=1;
        for(i=2; i<n; i++)
        {
            check[i]=check[i-1];
            if(arr[i-1]<arr[i]&&arr[i+1]<arr[i])
            {
                check[i]++;
            }
        }
        check[n]=check[n-1];
        curLow=1;
        curPeak=0;
        for(i=1; i<=n-k+1; i++)
        {
            if(check[i+k-2]-check[i]>curPeak)
            {
                curLow=i;
                curPeak=check[i+k-2]-check[i];
            }
        }
        cout<<curPeak+1<<" "<<curLow<<endl;
    }
    return 0;
}
