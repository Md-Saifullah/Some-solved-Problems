#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    freopen("input.txt","r",stdin);
    int rod,cut,i,j;
    cin>>rod>>cut;
    int dp[cut+1][rod+1],length[cut+1],cost[cut+1];
    for(i=1;i<=cut;i++)
    {
        cin>>length[i]>>cost[i];
    }
    for(i=0;i<=cut;i++)
    {
        for(j=0;j<=rod;j++)
        {
            if(i==0||j==0)
            {
                dp[i][j]=0;
            }
            else
            {
                if(length[i]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=max((cost[i]+dp[i][j-length[i]]),dp[i-1][j]);
                }
            }
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    i=cut;
    j=rod;
    cout<<dp[i][j]<<endl;
    while(i!=0&&j!=0)
    {
        if(dp[i][j]==dp[i-1][j])
        {
            i--;
        }
        else
        {
            vec.push_back(length[i]);
            j-=length[i];
        }
    }
    int k=vec.size();
    for(i=k-1;i>=0;i--)
    {
        cout<<vec[i]<<" ";
    }

    return 0;
}
