#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s1,s2;
    int check[1000]={0},check2[1000]={0},f=0;
    getline(cin,s1);
    getline(cin,s2);
    for(char a:s1)
    {
        if(a!=' ')
        {
            check[a]++;
            check2[a]=1;
        }
    }
    for(char a:s2)
    {
        if(a!=' ')
        {
            if(check2[a]==0)
            {
                f=1;
                break;
            }
            else
            {
                if(check[a]!=0)
                {
                    check[a]--;
                }
                else
                {
                    f=1;
                    break;
                }
            }
        }
    }
    cout<<((f)?"NO\n":"YES\n");
    return 0;
}
