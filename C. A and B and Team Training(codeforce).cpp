#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    return(n%3==2)?(n/3)*2+1:(n/3)*2;
}
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int a,b,r,dif;
        if(n==m)
        {
            r=solve(n);
            cout<<r<<endl;
            continue;
        }
        else if(n>m)
        {
            dif=n-m;
            if(dif>=m)
            {
                r=m;
            }
            else
            {
                r=dif+solve(m-dif);
            }
            cout<<r<<endl;
        }
        else
        {
            dif=m-n;
            if(dif>=n)
            {
                r=n;
            }
            else
            {
                r=dif+solve(n-dif);
            }
            cout<<r<<endl;
        }

    }
}
