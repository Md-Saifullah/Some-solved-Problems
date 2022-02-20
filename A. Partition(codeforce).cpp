#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,b;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>b;
        sum+=abs(b);
    }
    cout<<sum<<endl;
    return 0;
}
