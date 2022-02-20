#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,temp;
    while(cin>>a>>b)
    {
        cout<<a<<" "<<b<<" ";
        if(a<b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        int m=0;
        for(i=b; i<=a; i++)
        {
            int c=1,j=i;
            while(j!=1)
            {
                if(j%2==0)
                {
                    j=j/2;
                }
                else
                {
                    j=3*j+1;
                }
                c++;
            }
            if(m<c)
            {
                m=c;
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
