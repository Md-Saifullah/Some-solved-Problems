#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string b,c;
    while(cin>>a)
    {
        cin>>b>>c;
        if(c[0]=='w')
        {
            cout<<((a==5||a==6)?"53\n":"52\n");
        }
        else
        {
            cout<<((a<30)?"12\n":((a==30)?"11\n":"7\n"));
        }
    }
    return 0;
}
