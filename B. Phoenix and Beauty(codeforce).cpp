#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,k,d=0;
        cin>>n>>k;
        vector<int> result,check(101,0),a(n);
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int j:a)
        {
            if(check[j]==0)
            {
                check[j]=1;
                result.push_back(j);
            }
        }
        if(k<result.size())
        {
            cout<<-1<<endl;
        }
        else
        {
            i=k-result.size();
            while(i--)
            {
                result.push_back(1);
            }
            cout<<n*result.size()<<endl;
            while(n--)
            {
                for(int l:result)
                {
                    cout<<l<<" ";
                }
            }
            cout<<endl;
        }
    }
}
