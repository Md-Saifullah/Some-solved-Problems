#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,a[1000],k=1,l=0,j;
        cin>>s;
        while(s!=0)
        {
            if(s%10!=0)
            {
                a[l]=(s%10)*k;
                l++;
            }
            k=k*10;
            s=s/10;

        }
        cout<<l<<endl;
        for(j=0; j<l; j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
}
