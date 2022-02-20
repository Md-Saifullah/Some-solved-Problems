#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,m;
    while(cin>>s>>m)
    {
        int a,b=0,c=0;
        while(s--)
        {
            cin>>a;
            (a-b>m)?c=1:c++;
            b=a;
        }
        cout<<c<<endl;
    }
    return 0;
}
