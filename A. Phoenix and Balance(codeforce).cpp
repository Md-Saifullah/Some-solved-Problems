#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long sum;
        sum=(2<<n/2)-2;
        cout<<sum<<endl;
    }
    return 0;
}
