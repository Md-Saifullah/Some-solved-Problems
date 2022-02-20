#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,r=0,b,f;
        cin>>n>>k;
        int check[n+100];
        string s;
        cin>>s;
        check[0]=1;
        for(i=1; i<n; i++)
        {
            if(s[i]=='1')
                check[i]=check[i-1]+1;
            else
                check[i]=check[i-1];
        }
       for(i=0;i<n;i++)
       {
           if(s[i]=='1')
           {
               i+=k;
           }
           else
           {
               b=max(i-k,0);
               f=min(i+k,n-1);
               if(check[b]==check[i]&&check[f]==check[i])
               {
                   r++;
                   i+=k;
               }
           }
       }
        cout<<r<<endl;
    }
    return 0;
}

