#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        if((n-((k-1)*2))%2==0&&(2*k)<=n)
        {
            cout<<"YES\n"<<(n-((k-1)*2));
            for(i=1;i<k;i++)
                cout<<" 2";
            cout<<endl;

        }
        else if((n-(k-1))%2==1&&k<=n)
        {
            cout<<"YES\n"<<(n-(k-1));
            for(i=1;i<k;i++)
                cout<<" 1";
            cout<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}

