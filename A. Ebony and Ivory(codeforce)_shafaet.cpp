#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int d=0,e=0,paisi=0,i=0;
        while(d>=0 && e>=0)
        {
            d=c-(a*i);
            e=c-(b*i);
            if(d%b==0 || e%a==0)
            {
                //cout<<d<<" "<<e<<" "<<paisi<<" "<<i<<endl;
                paisi=1;
                break;
            }
            //cout<<d<<" "<<e<<" "<<paisi<<" "<<i<<endl;
            i++;
        }
        if(paisi==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
