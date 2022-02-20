#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    while(cin>>n)
    {
        if(n<3)
        {
            cout<<"No";
        }
        else
        {
            cout<<"Yes\n1 "<<n<<endl<<n-1<<" ";
                for(i=1;i<n;i++)
                {
                    cout<<i<<" ";
                }
        }
        cout<<endl;
    }
}
