#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        if(n==1)
        {
            cin>>m;
            if(m%2!=0)
            {
                cout<<"-1\n";
            }
            else
            {
                cout<<"1\n1\n";
            }
        }
        else
        {
            int a[1000],i,s[10],j=0;
            for(i=1; i<=n; i++)
            {
                cin>>a[i];
            }
            for(i=1; i<=n; i++)
            {
                if(a[i]%2==0)
                {
                    cout<<"1"<<endl<<i<<endl;
                    break;
                }
                else
                {

                    s[j]=i;
                    j++;
                    if(j==2)
                    {
                        cout<<"2"<<endl<<s[0]<<" "<<s[1]<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
