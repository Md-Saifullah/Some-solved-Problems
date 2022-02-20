#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        while(n--)
        {
            string s;
            cin>>s;
            sort(&s[0],&s[s.size()]);
            char a=s[0];
            int f=0;
            for(char b:s)
            {
                if(a!=b)
                {
                    f=1;
                    break;
                }
                a++;
            }
            if(f==0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
    return 0;
}
