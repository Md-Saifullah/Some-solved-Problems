#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            int i,a[10000];
            for(i=0; i<n; i++)
            {
                cin>>a[i];
            }
            sort(&a[0],&a[n]);
            for(i=0; i<n-1; i++)
            {
                if((a[i+1]-a[i])>200)
                {
                    i=-1;
                    break;
                }
            }
            if(i!=-1&&1422-a[n-1]<=100)
            {
                cout<<"POSSIBLE\n";
            }
            else
            {
                cout<<"IMPOSSIBLE\n";
            }
        }
    }
    return 0;
}
