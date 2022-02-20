#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n],same=1,c=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(&a[0],&a[n]);
        for(int j=0;j<n-1;j++)
        {
            if(a[j]==a[j+1])
            {
                c++;
            }
            else
            {
                c=1;
            }
            same=max(c,same);
        }
        if(n-same>=same-1)
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
