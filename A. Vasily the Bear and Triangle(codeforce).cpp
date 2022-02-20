#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        long long sum=abs(x)+abs(y);
        if(x>0)
        {
            cout<<0<<" ";
            if(y>0)
            {
                cout<<sum<<" ";
            }
            else
            {
                cout<<sum*-1<<" ";
            }
            cout<<sum<<" "<<0;
        }
        else
        {
            cout<<-1*sum<<" "<<0<<" "<<0<<" ";
            if(y>0)
            {
                cout<<sum;
            }
            else
            {
                cout<<sum*-1;
            }
        }
        cout<<endl;
    }
    return 0;
}

