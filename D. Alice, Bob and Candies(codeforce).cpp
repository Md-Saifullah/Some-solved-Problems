#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,m=0,f=0,a[10000],as=0,bs=0,s=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        i=0;
        j=n-1;
        while(i<=j)
        {
            if(f==0)
            {
                k=s;
                s=0;
                while(k>=0&&i<=j)
                {
                    s+=a[i];
                    k-=a[i];
                    i++;
                    f=1;
                }
                as+=s;
            }
            else
            {
                k=s;
                s=0;
                while(k>=0&&i<=j)
                {
                    s+=a[j];
                    k-=a[j];
                    j--;
                    f=0;
                }
                bs+=s;
            }
            m++;
        }
        cout<<m<<" "<<as<<" "<<bs<<endl;
    }
    return 0;
}


