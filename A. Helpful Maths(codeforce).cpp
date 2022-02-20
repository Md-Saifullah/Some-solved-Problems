#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a,b,c;
    while(cin>>s)
    {
        sort(&s[0],&s[s.size()]);
        int i,j;
        for(i=s.size()/2,j=i-1;j>=0;j--,i++)
        {
            cout<<s[i]<<s[j];
        }
        cout<<s[s.size()-1]<<endl;
    }

    return 0;
}


