#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        string s,m;
        char a[1000];
        cin>>s;
        int j=0,k=0;
        for(char ab:s)
        {
            if(k==0)
            {
                if(ab&1)
                {
                    a[j++]='(';
                    k=1;
                }
            }
            else
            {
                if(ab&1)
                {

                }
                else
                {
                    a[j++]=')';
                    k=0;
                }
            }
            a[j++]=ab;
        }
        if(k==1)
        {
            a[j++]=')';
        }
        cout<<"Case #"<<i<<": ";
        for(k=0; k<j; k++)
        {
            cout<<a[k];
        }
        cout<<endl;
    }
}
