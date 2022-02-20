#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int cap=0,sm=0,dig=0,f=0;
        if(s.size()>4)
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]>='A'&&s[i]<='Z')
                {
                    cap++;
                }
                else if(s[i]>='a'&&s[i]<='z')
                {
                    sm++;
                }
                else if(s[i]>='0'&&s[i]<='9')
                {
                    dig++;
                }
                if(cap>0&&sm>0&&dig>0)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==1)
        {
            cout<<"Correct\n";
        }
        else
        {
            cout<<"Too weak\n";
        }
    }
    return 0;
}
