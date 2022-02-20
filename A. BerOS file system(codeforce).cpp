#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s,r;
    cin>>s;
    int f=0,i;
    for(char a:s)
    {
        if(a!='/'||f==0)
        {
            r+=a;
            (a=='/')?f=1:f=0;
        }
    }
    for(i=0; i<r.size()-1; i++)
    {
        cout<<r[i];
    }
    if(f==0||r.size()==1)
    {
        cout<<r[r.size()-1];
    }
    cout<<endl;
    return 0;
}




