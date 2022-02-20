#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,dEven=0,dOdd=0,i;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a;
            if(i%2)
            {
                if(a%2==0)
                    dOdd++;
            }
            else
            {
                if(a%2)
                    dEven++;
            }
        }
        if(dOdd==dEven) cout<<dEven<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
