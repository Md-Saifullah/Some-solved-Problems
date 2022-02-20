#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    while(cin>>a>>b>>c)
    {
        long long sum;
        sum=2*c+2*(min(a,b));
        if(a!=b)
            sum++;
        cout<<sum<<endl;
    }
    return 0;
}
