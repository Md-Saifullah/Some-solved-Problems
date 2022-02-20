#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n%2==0)
        {
            int a;
            a=pow(2,n/2);
            cout<<a<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
