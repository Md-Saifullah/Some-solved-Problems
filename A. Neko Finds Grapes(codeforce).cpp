#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int s,i,a,odd_a=0,odd_b=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a&1)
            {
                odd_a++;
            }
        }
        for(i=0;i<m;i++)
        {
            cin>>a;
            if(a&1)
            {
                odd_b++;
            }
        }
        s=min(odd_a,m-odd_b)+min(odd_b,n-odd_a);
        cout<<s<<endl;
    }
    return 0;
}


