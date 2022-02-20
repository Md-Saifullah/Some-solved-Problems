#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int f=0,i;
        if(a>c&&b>c)
        {
            f=1;
        }
        else if(a>c)
        {
            if(c%b)
            {
                f=1;
            }
        }
        else if(b>c)
        {
            if(c%a)
            {
                f=1;
            }
        }
        else
        {
            if(c%a!=0&&c%b!=0)
            {
                while(c>a)
                {
                    c-=a;
                    if(c%b==0)
                    {
                        break;
                    }
                }
                if(c%b!=0)
                {
                    f=1;
                }
            }
        }
        cout<<((f)?"NO\n":"YES\n")<<endl;
    }
    return 0;
}
