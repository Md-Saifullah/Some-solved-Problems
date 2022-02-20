#include<bits/stdc++.h>
using namespace std;
bool subSetSum(int arr[],int n,int sum)
{
    bool dp[n+1][sum+1];
    cout<<"The table: "<<endl;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            bool result;
            if(j==0)
            {
                result=true;
            }
            else if(i==0)
            {
                result=false;
            }
            else
            {
                if(arr[i]>j)
                {
                    result=dp[i-1][j];
                }
                else
                {
                    result=dp[i-1][j]|dp[i-1][j-arr[i]];
                }
            }
            dp[i][j]=result;
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][sum];
}
int main()
{
    cout<<"Enter the number of element of the set: ";
    int n,sum,i;
    cin>>n;
    int arr[n+1];
    arr[0]=0;
    cout<<"Enter the elements of the set: ";
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum: ";
    cin>>sum;
    if(subSetSum(arr,n,sum))
    {
        cout<<"It is possible to create the sum using subset of the given set";
    }
    else
    {
        cout<<"It is not possible to create the sum using subset of the given set";
    }
    return 0;
}
