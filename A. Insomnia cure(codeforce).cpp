#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,i,j;
    while(cin>>k>>l>>m>>n>>d)
    {
        for(i=1,j=0;i<=d;i++)
        {
            if(i%k==0||i%l==0||i%m==0||i%n==0)
            {
                j++;
            }
        }
        cout<<j<<endl;
    }
    return 0;
}
