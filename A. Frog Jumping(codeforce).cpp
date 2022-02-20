#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long r,l,f,s;
        cin>>r>>l>>f;
        s=r*(f/2)-l*(f/2);
        if(f%2)
            s+=r;
        cout<<s<<endl;
    }
    return 0;
}
