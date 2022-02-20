#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    while(cin>>a[1])
    {
        int same,f=0,i;
        for(i=2; i<=16; i++)
        {
            cin>>a[i];
        }
        for(i=1; i<12; i++)
        {
            same=0;
            if(i%4==0)
                continue;
            else
            {
                if(a[i]==a[i+1])
                {
                    same++;
                }
                if(a[i]==a[i+4])
                {
                    same++;
                }
                if(a[i]==a[i+5])
                {
                    same++;
                }
                if(same!=1)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
