#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s;
    while(cin>>n>>s)
    {
        int check[100000],d,i;
        memset(check,0,100000);
        string m;
        cin>>m;
        for(i=0; i<n; i++)
        {
            check[m[i]]++;
        }
        d=check['A'];
        for(char j='B'; j<'A'+s; j++)
        {
            d=min(d,check[j]);
        }
        cout<<d*s<<endl;

    }
    return 0;
}
