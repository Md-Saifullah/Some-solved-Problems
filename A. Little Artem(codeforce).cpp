#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==0&&j==0)
                {
                    cout<<"W";
                }
                else
                {
                    cout<<"B";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
