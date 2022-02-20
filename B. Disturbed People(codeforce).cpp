#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c;
    while(cin>>n)
    {
        int a[n+50];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=1,c=0; i<n-1; i++)
        {
            if(a[i]==0)
            {
                if(a[i-1]==1&&a[i+1]==1)
                {
                    a[i+1]=0;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
