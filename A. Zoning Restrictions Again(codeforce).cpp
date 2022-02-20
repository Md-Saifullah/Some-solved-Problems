#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,m;
    while(cin>>n>>h>>m)
    {
        vector<int> check(n,h);
        int j,i,l,r,x;
        long long sum=0;
        while(m--)
        {
            cin>>l>>r>>x;
            for(i=l;i<=r;i++)
            {
                if(check[i-1]>x)
                {
                    check[i-1]=x;
                }
            }
        }
        for(int j:check)
        {
            sum+=j*j;
            //sum+=check[i]*check[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
