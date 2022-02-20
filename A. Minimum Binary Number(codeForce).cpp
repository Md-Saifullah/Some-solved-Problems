#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i=0;
        string s;
        cin>>s;
        for(char a:s)
        {
            if((a&1)==0)
            {
                i++;
            }
        }
        if(i==n)
        {
            cout<<"0\n";
        }
        else
        {
            string m;
            m.assign(i+1,'0');
            m[0]='1';
            cout<<m<<endl;
        }
    }
    return 0;
}
