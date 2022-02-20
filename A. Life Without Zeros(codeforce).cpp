#include<bits/stdc++.h>
using namespace std;
int makeZero(int a)
{
    int ma=0,k=1;
    while(a!=0)
    {
        if(a%10!=0)
        {
            ma+=(k*(a%10));
            k=k*10;
        }
        a=a/10;
    }
    return ma;
}
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int msum=0,ma,mb;
        ma=makeZero(a);
        mb=makeZero(b);
        msum=makeZero(a+b);
        if(ma+mb==msum)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}

