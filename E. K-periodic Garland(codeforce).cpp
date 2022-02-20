#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,f=0,c=0,w=0;
        string s;
        cin>>n>>k>>s;
        i=s.size()-1;
        while(s[i]=='0'&&i>=0)
        {
            i--;
        }
        j=0;
        while(j<=i)
        {
            if(f==0)
            {
                if(s[j]=='1')
                {
                    f=1;
                    c=0;
                }
            }
            else
            {
                c++;
                if(s[j]=='1'&&c!=k)
                {
                    w++;
                }
                if(s[j]=='0'&&c==k)
                {
                    w++;
                }
                if(c==k)
                {
                    c=0;
                }
            }
            j++;
        }
        cout<<w<<endl;
    }
    return 0;
}

