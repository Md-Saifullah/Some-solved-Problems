#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[100000];
        int s=1,i,n;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(&a[0],&a[n]);
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
