#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,m;
    while(cin>>s>>m)
    {
        int i,c=0;
        if(s.size()==m.size())
        {
            for(i=0; i<s.size(); i++)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    if(m[i]!='a'&&m[i]!='e'&&m[i]!='i'&&m[i]!='o'&&m[i]!='u')
                    {
                        c=1;
                        break;
                    }
                }
                else
                {
                    if(m[i]=='a'||m[i]=='e'||m[i]=='i'||m[i]=='o'||m[i]=='u')
                    {
                        c=1;
                        break;
                    }
                }
            }
        }
        else
        {
            c=1;
        }
        if(c==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
