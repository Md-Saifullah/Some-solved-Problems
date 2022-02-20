#include<bits/stdc++.h>
using namespace std;
int rodCutting(int rod,int cut)
{
    int dp[cut+1][rod+1],length[cut+1],cost[cut+1],i,j;
    cout<<"Enter the cut size and value"<<endl;
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
    return dp[cut][rod];
}
int main()
{
    int rod,cut;
    cout<<"Enter the rod size and how many number of cuts available:"<<endl;
    cin>>rod>>cut;
    cout<<endl<<"Maximum profit: "<<rodCutting(rod,cut)<<endl;
    return 0;
}

