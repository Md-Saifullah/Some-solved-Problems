#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a[n],b[n],c[n],d[n];
        long long i,j,z=0,p=0,k=0,l=0,m=0,s=0,cn=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>b[i];
            if(a[i]-b[i]>0)
            {
                c[k]=a[i]-b[i];
                p++;
                k++;
            }
            else if(a[i]-b[i]<0)
            {
                d[l]=(a[i]-b[i])*(-1);
                l++;
                m++;
            }
            else
                s++;
        }
        sort(&c[0],&c[k]);
        sort(&d[0],&d[l]);

        if(p==0 && m==0)
        {
            cout<<p<<endl;
        }
        else if(m==0)
        {
            if(p>1)
            {
                z=(((p-1)*p)/2)+(s*p);
                cout<<z<<endl;
            }
            else
                cout<<s*p<<endl;
        }
        else
        {
            for(i=0; i<k; i++)
            {
                for(j=0; j<l; j++)
                {
                    if(c[i]>d[j])
                    {
                        cn++;
                    }
                    else
                        break;
                }
            }
            if(cn>1)
            {
                z=cn+(((p-1)*p)/2)+(s*p);
                cout<<z<<endl;
            }
            else
            {
                z=cn+(s*p);
                cout<<z<<endl;
            }
        }
    }
}
