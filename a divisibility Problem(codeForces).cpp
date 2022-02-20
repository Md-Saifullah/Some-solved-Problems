#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
       if(a<b)
       {
           i=b-a;
       }
       else if(a%b==0)
       {
           i=0;
       }
       else
       {
           j=(a/b)+1;
           i=(b*j)-a;
       }
        cout<<i<<endl;
    }
    return 0;
}
