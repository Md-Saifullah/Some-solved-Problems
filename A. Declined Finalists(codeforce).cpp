#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b,a=0;
    while(n--)
    {
        cin>>b;
        if(b>a)
        {
            a=b;
        }
    }
    cout<<((a>25)?a-25:0)<<endl;
    return 0;
}
