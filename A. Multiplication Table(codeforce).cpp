#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    while(cin>>n>>x)
    {
        int i,c;
        for(c=0,i=1; i<=x&&i<=n; i++)
        {
            if(x%i==0)
            {
                if(x/i<=n)
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
