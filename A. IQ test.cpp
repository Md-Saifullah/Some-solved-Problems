#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,odd1=0,odd=0,even=0,even1=0,a[200];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]&1)
        {
            odd=i;
            odd1++;
        }
        else
        {
            even=i;
            even1++;
        }
    }
    if(even1>1)
        cout<<odd+1<<endl;
    else
        cout<<even+1<<endl;
    return 0;
}
