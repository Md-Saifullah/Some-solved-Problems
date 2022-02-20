#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,j,sum=0;
        cin>>n;
        i=n/2;
        j=1;
        while(i>0)
        {
            sum+=((n-j)*4*i);
            i--;
            j+=2;
        }
        cout<<sum<<endl;
    }
    return 0;
}
