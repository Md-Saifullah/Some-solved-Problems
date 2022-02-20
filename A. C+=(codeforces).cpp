#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,temp,c;
        cin>>a>>b>>n;
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        c=0;
        while(a<=n)
        {
            b+=a;
            temp=a;
            a=b;
            b=temp;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
