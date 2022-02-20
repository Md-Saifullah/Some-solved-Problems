#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        long long s1,s2,s3;
        s1=sqrt((a*b)/c);
        s2=sqrt((a*c)/b);
        s3=sqrt((c*b)/a);
        cout<<4*(s1+s2+s3)<<endl;
    }
}
