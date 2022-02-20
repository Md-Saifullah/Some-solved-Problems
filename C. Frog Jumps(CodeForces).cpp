#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        int i=0,m=0;
        cin>>str;
        while(i<str.size())
        {
            int c=0;
            if(str[i]=='L')
            {
                c++;
                while(str[i]=='L')
                {
                    i++;
                    c++;
                }
            }
            else
            {
                i++;
            }
            m=max(m,c);
        }
        if(m==0)
            m=1;
        cout<<m<<endl;
    }
    return 0;
}
