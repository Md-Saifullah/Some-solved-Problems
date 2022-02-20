#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    while(cin>>n)
    {
        int arr[n+50],sum=1,b;
        memset(arr,0,sizeof(arr));
        vector<int>result;
        for(i=1; i<=n; i++)
        {
            arr[i]=sum;
            cin>>b;
            sum+=b;
        }
        cin>>m;
        for(i=1; i<=m; i++)
        {
            cin>>b;
            int low=1,mid,high=n;
            while(low<=high)
            {
                mid=(high+low)/2;
                if(mid==n&&b>=arr[mid])
                {
                    result.push_back(mid);
                    break;
                }
                if(b>=arr[mid]&&b<arr[mid+1])
                {
                    result.push_back(mid);
                    break;
                }
                else if(b>arr[mid])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        for(int i=0; i<result.size(); i++)
        {
            cout<<result[i]<<endl;
        }
    }
    return 0;
}
