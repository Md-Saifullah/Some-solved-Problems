#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        string s;
        cin>>k>>s;
        int f0=0;
        for(int i=0; i<k; i++)
        {
            if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9')
            {
                cout<<1<<endl<<s[i];
                f0=1;
                break;
            }
        }
        if(!f0)
        {
            cout<<2<<endl;
            int f3=0,f257=0;
            char b;
            for(int i=0; i<k; i++)
            {
                if(s[i]=='3')
                {
                    if(f3)
                    {
                        cout<<33;
                        break;
                    }
                    else
                    {
                        f3=1;
                    }
                }
                else if(s[i]=='2'||s[i]=='5')
                {
                    if(f3)
                    {
                        cout<<3<<s[i];
                        break;
                    }
                    else if(f257)
                    {
                        cout<<b<<s[i];
                        break;
                    }
                    else
                    {
                        f257=1;
                        b=s[i];
                    }
                }
                else
                {
                    if(f257)
                    {
                        cout<<b<<s[i];
                        break;
                    }
                    else
                    {
                        f257=1;
                        b=s[i];
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
