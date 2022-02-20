#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int check[1000]={0},m=0;
        string s;
        cin>>s;
        for(char a:s)
        {
            check[a]++;
            m=max(m,check[a]);
        }
        cout<<((m>k)?"NO\n":"YES\n");
    }
    return 0;
}

