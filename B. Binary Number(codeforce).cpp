#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int c=0,i=s.size()-1,j=0,f=0;
        while(i!=0)
        {
            if(s[i]=='0')
            {
                i--;
                f=0;
            }
            else
            {
                f=1;
                for(j=1; s[i-j]!='0'&&i-j>0; j++) {}
                s[i-j]='1';
                c+=j;
                i-=j;
            }
            c++;
        }
        cout<<c+f<<endl;
    }
    return 0;
}
