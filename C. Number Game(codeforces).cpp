#include<bits/stdc++.h>
using namespace std;
int divisor(int n)
{
    int i=5,c=0;
    while(n%3==0&&3*3<=n)
    {
        c++;
        n/=3;
    }
    while(i*i<=n)
    {
        if(n%i==0)
        {
            c++;
            n/=i;
            continue;
        }
        else if(n%(i+2)==0)
        {
            c++;
            n/=(i+2);
            continue;
        }
        else
        {
            i+=6;
        }
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,r=0,c;
        cin>>n;
        if(n!=1&&n%2!=0||n==2)
        {
            r=1;
        }
        else
        {
            int i=0;
            while(n%2==0)
            {
                n/=2;
                i++;
            }
            if(n==1)
            {
                r=0;
            }
            else
            {
                c=divisor(n);
                if(i==1)
                {
                    if(c>0)
                    {
                        r=1;
                    }
                    else
                    {
                        r=0;
                    }
                }
                else
                {
                    r=1;
                }
            }
        }
        if(r)
        {
            cout<<"Ashishgup"<<endl;
        }
        else
        {
            cout<<"FastestFinger"<<endl;
        }
    }
    return 0;
}
