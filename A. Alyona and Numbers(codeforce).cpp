#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        long long sum=0,c;
        sum+=((b/5)*a)+((b%5)*(a/5));
        c=(a%5)+(b%5);
        if(c>4)
        {
            sum+=(c%5)+1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
