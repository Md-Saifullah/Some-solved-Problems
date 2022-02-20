#include<bits/stdc++.h>
using namespace std;
struct item
{
    int day,index;
};
bool cmp(item a,item b)
{
    return(a.day<b.day)?true:false;
}
int main()
{
    int n,k,i,j,l;
    item a[200];
    while(cin>>n>>k)
    {

        for(i=0; i<n; i++)
        {
            cin>>a[i].day;
            a[i].index=i+1;
        }
        sort(&a[0],&a[n],cmp);
        j=0;
        while(k>=a[j].day&&j<n)
        {
            k-=a[j].day;
            j++;
        }
        cout<<j<<endl;
        if(j==0)
            continue;
        for(l=0;l<j;l++)
        {
            cout<<a[l].index<<" ";
        }
        cout<<endl;
    }
    return 0;
}
