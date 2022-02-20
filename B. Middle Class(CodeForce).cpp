#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b)
{
    return(a>b)?true:false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m,s=0,i=0,j=0,k=0,n,x,a[200000];
        cin>>n>>x;
        for(i=0,j=0,k=0; i<n; i++)
        {
            cin>>m;
            if(m<x)
            {
                a[j]=m;
                j++;
            }
            else
            {
                s+=(m-x);
                k++;
            }

        }
        if(n>j)
        {
            sort(&a[0],&a[j],cmp);
            i=0;
            while((s>=(x-a[i]))&&i<j)
            {
                s=s-(x-a[i]);
                i++;
            }
            cout<<k+i<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
