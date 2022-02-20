#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n+200];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(&a[0],&a[n]);
        for(i=n/2,j=(n/2)-1;i<n;i++,j--)
        {
            cout<<a[i]<<" "<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


