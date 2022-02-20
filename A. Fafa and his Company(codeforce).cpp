#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,c=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
