#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int j,i,r;
        i=n%7;
        j=(n/7)*2;
        if(i==0)
        {
            r=j;
        }
        else if(i==1)
        {
            r=j+1;
        }
        else
        {
            r=j+2;
            if(i==6)
                j++;
        }
        cout<<j<<" "<<r<<endl;
    }
    return 0;
}
