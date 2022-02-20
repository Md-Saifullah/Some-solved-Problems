#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        string s;
        int i,j;
        cin>>s;
        for(i=0,j=1;i<=n;j++,i+=j)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}

