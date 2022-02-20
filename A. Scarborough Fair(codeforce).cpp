#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j;
    char c,d;
    while(cin>>n>>m)
    {
        string s;
        cin>>s;
        for(i=0; i<m; i++)
        {
            cin>>a>>b>>c>>d;
            for(j=a-1; j<=b-1; j++)
            {
                if(s[j]==c)
                {
                    s[j]=d;
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
