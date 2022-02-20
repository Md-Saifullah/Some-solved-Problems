#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,s=0;
        cin>>a>>b>>c;
        if(b<c/2)
        {
            s+=b*3;
        }
        else
        {
            b-=(c/2);
            s+=3*(c/2);
            if(a<b/2)
            {
                s+=a*3;
            }
            else
            {
                a-=(c/2);
                s+=3*(b/2);
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
