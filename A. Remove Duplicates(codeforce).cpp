#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        vector<int>ans;
        int i,a[n+50],check[1050];
        memset(check,0,sizeof(check));
        for(i=0;i<n; i++)
        {
            cin>>a[i];
        }
        for(i=n-1;i>=0; i--)
        {
            if(check[a[i]]==0)
            {
                check[a[i]]++;
                ans.push_back(a[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(i=ans.size()-1;i>=0;i--)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
