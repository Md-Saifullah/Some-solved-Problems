#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,arr[400][400],j,f,k,m,l,sum=0,rowcnt[200],colcnt[200],rowcount=0,colcount=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            f=0;
            memset(rowcnt,0,sizeof(rowcnt));
            for(k=1;k<=n;k++)
            {
                cin>>arr[j][k];
                if(k==j)
                {
                    sum+=arr[j][k];
                }
                if(rowcnt[arr[j][k]]==0)
                {
                    rowcnt[arr[j][k]]=1;
                }
                else
                {
                    f=1;
                }
            }
            rowcount+=f;
        }
        for(l=1;l<=n;l++)
        {
            memset(colcnt,0,sizeof(colcnt));
            for(m=1;m<=n;m++)
            {
                if(colcnt[arr[m][l]]==0)
                {
                    colcnt[arr[m][l]]=1;
                }
                else
                {
                    colcount++;
                    break;
                }
            }
        }
        cout<<"Case #"<<i<<": "<<sum<<" "<<rowcount<<" "<<colcount<<endl;
    }
    return 0;
}
