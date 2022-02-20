#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,w;
    while(cin>>r>>w)
    {
        int i,j,right[r],wrong[w];
        for(i=0;i<r;i++)
        {
            cin>>right[i];
        }
        for(i=0;i<w;i++)
        {
            cin>>wrong[i];
        }
        sort(&right[0],&right[r]);
        sort(&wrong[0],&wrong[w]);
        if(wrong[0]>right[r-1]&&2*right[0]<wrong[0])
        {
            cout<<max(2*right[0],right[r-1])<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
