#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,last,start,n,rev;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int x1,y1,x2,y2,steps=0;
        cin>>x1>>y1>>x2>>y2;
        if((x1+y1)==(x2+y2))
        {
            steps=x2-x1;
        }
        else
        {
            if(y2==0)
            {
                last=x2+1;
            }
            else
            {
                last=(x2+y2);
                steps=steps+x2;
            }
            if(x1==0)
            {
                start=y1;
            }
            else
            {
                start=(x1+y1+1);
                steps=steps+y1;
            }
            n=last-start;
            rev=(x2+y2)-(x1+y1);
            steps=steps+((n*(2*start+(n-1)*1)/2)+rev);
        }
        cout<<"Case "<<i<<": "<<steps<<endl;
    }
    return 0;
}
