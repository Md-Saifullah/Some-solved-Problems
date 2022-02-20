#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,s,c,mc=0,a[n+50],k;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==0)
                s=i;
        }
        for(i=s,c=0,k=0; k<n; i++,k++)
        {
            i=i%n;
            (a[i]==1)?c++:c=0;
            mc=max(mc,c);
        }
        cout<<mc<<endl;
    }
    return 0;
}

