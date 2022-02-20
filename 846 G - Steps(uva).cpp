#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long x,y,temp,ti;
    double td;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x<y)
        {
            temp=x;
            x=y;
            y=temp;
        }
        td=(x-y)/2.0;
        int i=1;
        while(td>=i)
        {
            td=td-i;
            i++;
        }
        td=td*2;
        if(td==0)
        {
            ti=2*(i-1);
        }
        else if(td<=i)
        {
            ti=(2*i)-1;
        }
        else
        {
            ti=2*i;
        }
        cout<<ti<<endl;
    }
    return 0;
}
