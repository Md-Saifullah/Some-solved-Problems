#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    while(cin>>x)
    {
        int i,a,neg=0,pos=0,zero=0,n[100],p[100];
        for(i=0; i<x; i++)
        {
            cin>>a;
            if(a>0)
            {
                p[pos]=a;
                pos++;
            }
            else if(a<0)
            {
                n[neg]=a;
                neg++;
            }
            else
            {
                zero++;
            }
        }
        cout<<1<<" "<<n[0]<<endl;
        if(pos==0)
        {
            cout<<2<<" "<<n[1]<<" "<<n[2]<<endl;
            cout<<zero+neg-3<<" ";
            for(i=3; i<neg; i++)
            {
                cout<<n[i]<<" ";
            }
        }
        else
        {
            cout<<1<<" "<<p[0]<<endl;
            cout<<neg-1+zero+pos-1<<" ";
            for(i=1; i<pos; i++)
            {
                cout<<p[i]<<" ";
            }
            for(i=1; i<neg; i++)
            {
                cout<<n[i]<<" ";
            }
        }
        for(i=0; i<zero; i++)
        {
            cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}
