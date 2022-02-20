#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    char a;
    for(char b:s)
    {
        if((b>='a'&&b<='z')||(b>='A'&&b<='Z'))
        {
            a=b;
        }
    }
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='y'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='Y')
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
