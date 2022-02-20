#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s;
    int c=0,check[1000] = {0};
    getline(cin,s);
    for(char a:s)
    {
        if(a>='a'&&a<='z')
        {
            if(check[a]==0)
            {
                c++;
                check[a]=1;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}



