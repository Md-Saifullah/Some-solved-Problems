#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,c=0,f=0,value;
        for(i=0;i<n;i++)
        {
            cin>>value;
            if(value!=f)
            {
                c++;
            }
            f=value;
        }
        cout<<c<<endl;
    }
    return 0;
}
