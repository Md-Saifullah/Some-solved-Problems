#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,temp;
    while(cin>>a>>b)
    {
        i=0;
        while(b!=0)
        {
            i+=(a/b);
            a=a%b;
            temp=a;
            a=b;
            b=temp;
        }
        cout<<i<<endl;
    }
    return 0;
}

