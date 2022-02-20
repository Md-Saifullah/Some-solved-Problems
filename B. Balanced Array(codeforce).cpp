#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,a[100000];
        cin>>n;
        if((n/2)%2||n<4)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            j=1;
            for(i=1;i<=n/2;i++)
            {
                if(j%2)
                {
                    a[i]=j;
                    cout<<j+1<<" ";
                }
                else
                {
                    cout<<j<<" ";
                    a[i]=j+1;
                }
                j+=3;
            }
            for(i=1;i<=n/2;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}

