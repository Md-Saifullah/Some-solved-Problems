#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,f;
    while(cin>>a>>b)
    {
        f=0;
        if(b%a==0)
        {
            c=b/a;
            i=0;
            while(c!=1)
            {
                if(c%2==0)
                {
                    c=c/2;
                }
                else if(c%3==0)
                {
                    c=c/3;
                }
                else
                {
                    f=1;
                    break;
                }
                i++;
            }
        }
        else
        {
            f=1;
        }
        if(f)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
