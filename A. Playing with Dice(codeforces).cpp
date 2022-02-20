#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    while(cin>>a>>b)
    {
        int w=0,d=0,l=0;
        for(i=1; i<7; i++)
        {
            if(abs(a-i)>abs(b-i))
            {
                l++;
            }
            else if(abs(a-i)<abs(b-i))
            {
                w++;
            }
            else
            {
                d++;
            }
        }
        cout<<w<<" "<<d<<" "<<l<<endl;
    }
    return 0;
}
