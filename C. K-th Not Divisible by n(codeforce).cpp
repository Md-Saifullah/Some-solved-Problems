#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,s,t,m;
        cin>>n>>k;
        s=(k/(n-1));
        t=s*n;
        if(k%(n-1)==0)
        {
            t--;
        }
        else
        {
            t=t+(k%(n-1));
        }
        cout<<t<<endl;
    }
    return 0;
}
