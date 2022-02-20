#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,a=0,b=0,c;
        for(i=0;i<4;i++)
        {
            cin>>c;
            a+=((2*(c/1000))%10)+((2*(c/1000))/10)+((2*((c/10)%10))%10)+((2*((c/10)%10))/10);
            b+=((c/100)%10)+(c%10);
        }
        if((a+b)%10==0)
        {
            cout<<"Valid\n";
        }
        else
        {
            cout<<"Invalid\n";
        }
    }
    return 0;
}
