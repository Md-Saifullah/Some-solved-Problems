#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        (s[1]=='+')?c++:c--;
    }
    cout<<c<<endl;
    return 0;
}


