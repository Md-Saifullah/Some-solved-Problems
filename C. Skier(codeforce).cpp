#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0,n=1,m=1;
        string s;
        cin>>s;
        for(char b:s)
        {
            if(b=='N'||b=='S')
                m++;
            else
                n++;
        }
        int j=0,i=0,check[m][n]= {0};
        check[0][0]=1;
        for(char a:s)
        {
            if(a=='N')
            {
                i--;
            }
            else if(a=='S')
            {
                i++;
            }
            else if(a=='E')
            {
                j--;
            }
            else if(a=='W')
            {
                j++;
            }
            if(i==-1)
            {
                i=m-1;
            }
            if(i==m)
            {
                i=0;
            }
            if(j==-1)
            {
                j=n-1;
            }
            if(j==n)
            {
                j=0;
            }
            if(check[i][j]==0)
            {
                check[i][j]=1;
                sum+=5;
            }
            else
            {
                sum+=1;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}



