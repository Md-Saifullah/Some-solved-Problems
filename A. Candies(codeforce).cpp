#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=2,a;
        cin>>n;
        while(1)
        {
            a=pow(2,k);
            if(n%(a-1)==0)
            {
                cout<<n/(a-1)<<endl;
                break;
            }
            k++;
        }
    }
    return 0;
}
