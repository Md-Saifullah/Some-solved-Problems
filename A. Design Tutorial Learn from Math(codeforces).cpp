#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n%2)
        {
            cout<<n-9<<" "<<9<<endl;
        }
        else
        {
            cout<<n-4<<" "<<4<<endl;
        }
    }
    return 0;
}
