#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        int m1,m2,sum;
        m1=min(a,min(c,d));
        a-=m1;
        m2=min(a,b);
        sum=(m1*256)+(m2*32);
        cout<<sum<<endl;
    }
    return 0;
}
