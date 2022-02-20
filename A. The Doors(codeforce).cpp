#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a,zero,one;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a==0)
            {
                zero=i;
            }
            else
            {
                one=i;
            }
        }
        cout<<min(zero,one)<<endl;
    }
    return 0;
}
