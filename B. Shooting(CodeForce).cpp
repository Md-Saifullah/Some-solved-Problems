#include<bits/stdc++.h>
using namespace std;
struct item
{
    int shot,index;
};
bool cmp(item a,item b)
{
    return(a.shot>b.shot)?true:false;
}

int main()
{
    item a[2000];
    int n;
    while(cin>>n)
    {
        int i,j,k,l,s=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i].shot;
            a[i].index=i+1;
        }
        sort(&a[0],&a[n],cmp);
        for(l=0; l<n; l++)
        {
            s+=(a[l].shot*l)+1;
        }
        cout<<s<<endl;
        for(l=0; l<n; l++)
        {
            cout<<a[l].index<<" ";
        }
        cout<<endl;
    }
    return 0;
}
