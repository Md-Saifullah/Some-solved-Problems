#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        long long s,m=0,a=0,i;
        for(i=0;i<n;i++)
        {
            cin>>s;
            a=s+m;
            cout<<a<<" ";
            if(m<a)
            {
                m=a;
            }
        }
        cout<<endl;
    }
    return 0;
}
