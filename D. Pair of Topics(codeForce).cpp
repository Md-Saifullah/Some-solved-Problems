#include<bits/stdc++.h>
using namespace std;
int binarySearch(int low,int high,int a[],int key)
{
    int mid;
    key=key*(-1);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]>key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(a[mid]>key)
    {
        return mid;
    }
    else
    {
        return mid-1;
    }
}
bool cmp(int a,int b)
{
    return(a>b)?true:false;
}
int main()
{
    int n,i,j;
    while(cin>>n)
    {
        int b[n],a[n];
        for( i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for( i=0; i<n; i++)
        {
            cin>>b[i];
        }
        for(i=0; i<n; i++)
        {
            a[i]=a[i]-b[i];
        }
        sort(&a[0],&a[n],cmp);
        long long c=0;
        for(i=0; a[i]>0&&i<n; i++)
        {
            j=binarySearch(i,n-1,a,a[i]);
            c=c+j-i;
        }
        cout<<c<<endl;
    }
    return 0;
}
