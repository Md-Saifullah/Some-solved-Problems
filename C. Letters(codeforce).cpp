#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        long long a[n+50],i,letter,j=1,pletter=0;
        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<=m; i++)
        {
            cin>>letter;
            letter=letter-pletter;
            while(letter>a[j])
            {
                letter-=a[j];
                pletter+=a[j];
                j++;
            }
            cout<<j<<" "<<letter<<endl;
        }
    }
    return 0;
}

