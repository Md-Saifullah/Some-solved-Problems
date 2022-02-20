#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,ba,ca;
    char a[100000],b[100000],c[100000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a[0];
        b[0]='1';
        c[0]='1';
        ba=0;
        ca=0;
        for(i=1; i<n; i++)
        {
            cin>>a[i];
            if(a[i]=='2')
            {
                if(ba==0&&ca==0)
                {
                b[i]='1';
                c[i]='1';
                }
                else
                {
                    b[i]='0';
                    c[i]='2';
                }
            }
            else if(a[i]=='1')
            {
                if(ba==1&&ca==0)
                {
                    b[i]='0';
                    c[i]='1';
                }
                else
                {
                    b[i]='1';
                    c[i]='0';
                    ba=1;
                    ca=0;
                }
            }
            else
            {
                b[i]='0';
                c[i]='0';
            }
        }
        cout<<b<<endl<<c<<endl;
        memset(b,'\0',n);
        memset(c,'\0',n);
    }
    return 0;
}
