#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n>>x)
    {
        int s,i;
        double  m=0;
        while(n--)
        {
            cin>>s;
            m+=s;
        }
        if(m<0)
        {
            m*=-1.00;
        }
        i=ceil(m/x);
        cout<<i<<endl;
    }
    return 0;
}
