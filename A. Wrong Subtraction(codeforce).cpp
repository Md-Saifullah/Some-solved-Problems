#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,m;
    while(cin>>s>>m)
    {
        while(m>=((s%10)+1))
        {
            m-=((s%10)+1);
            s=s/10;
        }
        s-=m;
        cout<<s<<endl;
    }
    return 0;
}
