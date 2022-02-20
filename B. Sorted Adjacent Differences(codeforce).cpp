#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(&a[0],&a[n]);
        if(n%2==0)
        {
            i=n/2;
        }
        else
        {
            cout<<a[n/2]<<" ";
            i=n/2+1;
        }
        j=(n/2)-1;
        while(i<n)
        {
            cout<<a[i]<<" "<<a[j]<<" ";
            i++;
            j--;
        }
        cout<<endl;
    }
    return 0;
}


