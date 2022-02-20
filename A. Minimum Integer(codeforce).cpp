#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        cout<<((c<a)?c:b+(c-(b%c)))<<endl;
    }
    return 0;
}
