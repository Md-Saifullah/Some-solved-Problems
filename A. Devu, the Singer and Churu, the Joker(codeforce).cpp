#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    while(cin>>n>>d)
    {
        int i,s=(n-1)*10,a;
        for(i=0; i<n; i++)
        {
            cin>>a;
            s+=a;
        }
        cout<<((s>d)?-1:((n-1)*2)+((d-s)/5));
    }
    return 0;
}

