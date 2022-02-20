#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int s=0,a,b,c;
        while(n--)
        {
            cin>>a>>b>>c;
            if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
            {
                s++;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

