#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int s=0;
        if(n>9)
        {
            n++;
            s=1;
        }
        while(n/10!=0)
        {
            if(n%10==0)
            {
                n/=10;
            }
            else
            {
                s+=(10-(n%10));
                n=(n/10)+1;
            }
        }
        cout<<s+9<<endl;
    }
    return 0;
}
