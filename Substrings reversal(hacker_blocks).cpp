#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int m,a,i;
        char temp;
        cin>>m;
        while(m--)
        {
            cin>>a;
            for(i=a;i<s.size()-a;i++)
            {
            temp=s[i-1];
            s[i-1]=s[s.size()-i];
            s[s.size()-i]=temp;
            }
        }
        cout<<s<<endl;
    }
}
