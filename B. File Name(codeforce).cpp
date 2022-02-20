#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,c=0,t=0;
        string s;
        cin>>s;
        for(i=0; i<n; i++)
        {
            if(s[i]=='x')
            {
                c++;
            }
            else
            {
                c=0;
            }
            if(c==3)
            {
                c=2;
                t++;
            }
        }
        cout<<t<<endl;
    }
    return 0;
}
