#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0;
        string s,m;
        cin>>n>>s;
        for(char a:s)
        {
            if(a&1)
            {
                i++;
                m+=a;
            }
            if(i==2)
            {
                break;
            }
        }
        if(i==2)
        {
            cout<<m<<endl;
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}
