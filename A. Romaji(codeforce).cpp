#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int i,f=0,j=s.size()-1;
        for(i=0; i<j; i++)
        {
            if(s[i]!='a'&&s[i]!='o'&&s[i]!='e'&&s[i]!='i'&&s[i]!='u'&&s[i]!='n')
            {
                if(s[i+1]!='a'&&s[i+1]!='o'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='u')
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)
        {
            if(s[j]!='a'&&s[j]!='o'&&s[j]!='e'&&s[j]!='i'&&s[j]!='u'&&s[j]!='n')
            {
                f=1;
            }
        }
        cout<<(f?"NO\n":"YES\n");
    }
    return 0;
}
