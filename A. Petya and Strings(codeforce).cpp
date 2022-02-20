#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    while(cin>>s>>t)
    {
        int f=0,i;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=32;
            if(t[i]>='A'&&t[i]<='Z')
                t[i]+=32;
            if(s[i]>t[i])
            {
                f=1;
                break;
            }
            else if(s[i]<t[i])
            {
                f=-1;
                break;
            }
        }
        cout<<f<<endl;
    }
    return 0;
}

