#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,j,c=0;
        char a[1000][1000];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        if(n<3)
            c=0;
        else
        {
            for(i=1; i<n-1; i++)
            {
                for(j=1; j<n-1; j++)
                {
                    if(a[i][j]=='X'&&a[i-1][j-1]==a[i][j]&&a[i+1][j+1]==a[i][j]&&a[i+1][j-1]==a[i][j]&&a[i-1][j+1]==a[i][j])
                    {
                        c++;
                    }
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
