#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int n,i;
        if(s.size()%2)
        {
            n=s.size()/2;
            cout<<s[n];
        }
        else
        {
            n=(s.size()/2)-1;
            cout<<s[n];
        }
        for(i=1; i<=n; i++)
        {
            cout<<s[n+i]<<s[n-i];
        }
        if(s.size()%2==0)
        {
            cout<<s[s.size()-1];
        }
        cout<<endl;
    }
    return 0;
}
