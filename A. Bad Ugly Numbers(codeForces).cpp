#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
            cout<<"-1\n";
        }
        else
        {
            string a;
            a.assign(n,'3');
            a[0]='2';
            cout<<a<<endl;
        }
    }
    return 0;
}
