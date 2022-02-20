#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int oo,io,ii,i,f=1;
        string s="";
        cin>>oo>>io>>ii;
        if(io%2)
        {
            f=0;
            io++;
        }
        io/=2;
        for(i=0; i<ii; i++)
        {
            s+="1";
        }
        for(i=0; i<io; i++)
        {
            s+="10";
        }
        for(i=0; i<oo; i++)
        {
            s+="0";
        }
        if(io==0)
        {
            s+=s[0];
        }
        else
        {
            if(f)
            {
                s+="1";
            }
        }
        cout<<s<<endl;
    }
}
