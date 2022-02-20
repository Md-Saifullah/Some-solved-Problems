#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a[100],b,m,i;
    string str;
    while(cin>>a[0])
    {
        for(i=1; i<9; i++)
        {
            cin>>a[i];
        }
        b=a[3]+a[6]+a[2]+a[8]+a[1]+a[4];
        m=b;
        str="BCG";
        b=a[3]+a[6]+a[1]+a[7]+a[2]+a[5];
        if(m>b)
        {
            m=b;
            str="BGC";
        }
                b=a[5]+a[8]+a[0]+a[6]+a[1]+a[4];
        if(m>b)
        {
            m=b;
            str="CBG";
        }
        b=a[5]+a[8]+a[1]+a[7]+a[0]+a[3];
        if(m>b)
        {
            m=b;
            str="CGB";
        }
        b=a[4]+a[7]+a[0]+a[6]+a[2]+a[5];
        if(m>b)
        {
            m=b;
            str="GBC";
        }
        b=a[4]+a[7]+a[2]+a[8]+a[0]+a[3];
        if(m>b)
        {
            m=b;
            str="GCB";
        }
        cout<<str<<" "<<m<<endl;
    }
    return 0;
}
