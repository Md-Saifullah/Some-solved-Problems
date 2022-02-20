#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return(a>b)?true:false;
}
int main()
{
    int n,low,high,mid,b;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(&a[0],&a[n],cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    while(cin>>b)
    {
        high=n-1;
        low=0;
        while(low<=high)
        {
            mid=(low+high)/2;
            /*if(a[mid]==b)
            {
                break;
            }*/
            if(a[mid]>b)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        if(b<a[mid])
        {
            cout<<mid<<endl;
        }
        else
        {
            cout<<mid-1<<endl;
        }
        cout<<low<<" "<<mid<<" "<<high<<endl;
    }
    return 0;
}
