#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.size();
    cout<<len<<endl;

    int i=0,j=1;
    if(s[i]=='q')
    {
        cout<<s[1]<<s[0];
    }
    return 0;
}
