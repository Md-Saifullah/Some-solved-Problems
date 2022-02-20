#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        string s;
        s.assign(n,'a');
        i=1;
        while(k>i)
        {
            k=k-i;
            i++;
        }
        s[n-1-i]='b';
        s[n-k]='b';
        cout<<s<<endl;
    }
    return 0;
}
