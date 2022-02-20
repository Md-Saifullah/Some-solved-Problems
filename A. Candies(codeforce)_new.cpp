#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k=3;
        cin>>n;
        while(1)
        {
            if(n%k==0)
            {
                cout<<n/k<<endl;
                break;
            }
            k=(k<<1)+1;
        }
    }
    return 0;
}

