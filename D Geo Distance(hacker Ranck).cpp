#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,d,x,q,w,e,r,t;
    while(cin>>a)
    {
        cin>>b>>c>>x;
        q=((4*c*x+a*c)*(4*c*x+a*c))/(4*a*a);
        w=((4*b*x+a*b)*(4*b*x+a*b))/(4*a*a);
        e=(((4*x)+a)*((4*x)+a))/8;
        r=((2*c*c)+(2*b*b)-(a*a))/8;
        t=sqrt((q+w-e));
        d=(1/sqrt(2))*(t-(sqrt(r)));
        cout<<fixed<<setprecision(3)<<d<<endl;
    }
    return 0;
}
