#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,n,odd,digit,i;
    while(cin>>b>>n)
    {
        odd=0;
        for(i=0; i<n; i++)
        {
            cin>>digit;
            if(digit%2)
                odd++;
        }
        if(b%2)
        {
            if(odd%2)
                cout<<"odd\n";
            else
                cout<<"even\n";
        }
        else
        {
            if(digit%2)
                cout<<"odd\n";
            else
                cout<<"even\n";
        }
    }
    return 0;
}
