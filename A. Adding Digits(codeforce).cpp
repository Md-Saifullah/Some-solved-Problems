#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    while(cin>>a>>b>>n)
    {
        int f=0;
        for(int i=0;i<10;i++)
        {
            if(((a*10)+i)%b==0)
            {
                a=(a*10)+i;
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout<<a;
            for(int i=1;i<n;i++)
            {
                cout<<0;
            }
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}
