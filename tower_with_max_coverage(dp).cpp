#include<bits/stdc++.h>
using namespace std;
int letsFly(int cost[],int t)
{
    int result[t+1];
    for(int i=0;i<=t;i++)
    {
        if(i==0)
        {
            result[i]=0;
        }
        else if(i==1)
        {
            result[i]=cost[i];
        }
        else
        {
            result[i]=max(result[i-1],result[i-2]+cost[i]);
        }
    }
    return result[t];
}
int main()
{
    cout<<"Enter the number of towers: ";
    int t;
    cin>>t;
    int cost[t+1];
    for(int i=1;i<=t;i++)
    {
        cin>>cost[i];
    }
    cout<<letsFly(cost,t);
    return 0;
}
