#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    while(cin>>n>>d)
    {
        string m,s;
        m.assign(n,'1');
        int cnt=0,sm=0,i;
        for(i=0; i<d; i++)
        {
            cin>>s;
            if(s!=m)
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            if(sm<cnt)
                {
                    sm=cnt;
                }
        }
        cout<<sm<<endl;
    }
    return 0;
}
