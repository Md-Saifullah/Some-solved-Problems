#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10000],n,s,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(&arr[0],&arr[n]);
        s=(n-1)/2;
        int j=s+1;
        for(int i=s; i>=0; i--)
        {
            cout<<arr[i]<<" ";
            if(j<n)
            {
                cout<<arr[j]<<" ";
                j++;
            }
        }
        cout<<endl;
    }
    return 0;
}

