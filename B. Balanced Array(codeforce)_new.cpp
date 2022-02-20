#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        if((n/2)%2||n<4)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            i=1;
            j=2;
            while(i<=n/2)
            {
                if(j%3!=0)
                {
                    cout<<j<<" ";
                    i++;
                }
                j+=2;

            }
            i=0;
            j=1;
            while(i<n/2)
            {
                if(j%3!=0)
                {
                    cout<<j<<" ";
                    i++;
                }
                j+=2;
            }
            cout<<endl;
        }
    }
    return 0;
}


