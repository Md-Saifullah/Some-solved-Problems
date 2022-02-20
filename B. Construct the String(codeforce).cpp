#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,i,j,k,l;
        cin>>n>>a>>b;
        char s='a';
        j=0;
        for(i=0;i<n;i++)
        {
            if(j<b)
            {
                cout<<s;
                j++;
                s++;
            }
            else
            {
                cout<<"a";
                s='b';
                j=1;
            }
        }
        cout<<endl;
    }
    return 0;
}
