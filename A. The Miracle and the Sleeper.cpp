#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int l,r;
        cin>>l>>r;
        if(l==1||(r/(l-1))>=2)
            cout<<(r-1)/2<<endl;
        else
            cout<<r%l<<endl;
    }
    return 0;
}
