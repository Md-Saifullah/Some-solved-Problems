#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;
    while(cin>>l>>r)
    {
        if(l%2==0)
        {
            if(r-l>1)
            {
                cout<<l<<" "<<l+1<<" "<<l+2;
            }
            else
            {
                cout<<-1;
            }
        }
        else
        {
            if(r-l>2)
            {
                cout<<l+1<<" "<<l+2<<" "<<l+3;
            }
            else
            {
                cout<<-1;
            }
        }
        cout<<endl;
    }
    return 0;
}
