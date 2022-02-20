#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,j,pos[100000],d,sp[100000],f=0;
        for(i=0;i<n;i++)
        {
            cin>>pos[i]>>d;
            sp[i]=pos[i]+d;
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i;j<n;j++)
            {
                if(pos[j]==sp[i]&&sp[j]==pos[i])
                {
                    f=1;break;
                }
            }
        }
        cout<<((f)?"YES\n":"NO\n");
    }
    return 0;
}



