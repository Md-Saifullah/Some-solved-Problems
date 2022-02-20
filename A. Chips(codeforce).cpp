#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int d,i;
        d=m%((n*(n+1))/2);
        for(i=1;d>=i;i++)
        {
            d-=i;
        }
        cout<<d<<endl;
    }
}
