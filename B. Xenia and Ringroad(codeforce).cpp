#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n>>x)
    {
        long long i,m=1,a,s=0;
        for(i=0;i<x;i++)
        {
            cin>>a;
            if(a>=m)
            {
                s+=a-m;
            }
            else
            {
                s+=(n-m+a);
            }
            m=a;
        }
        cout<<s<<endl;
    }
    return 0;
}
