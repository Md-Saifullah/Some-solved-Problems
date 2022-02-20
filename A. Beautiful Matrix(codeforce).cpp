#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,ai,aj,i,j,result;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>a;
            if(a)
            {
                ai=i;
                aj=j;
            }
        }
    }
    cout<<abs(3-ai)+abs(3-aj)<<endl;
    return 0;
}

