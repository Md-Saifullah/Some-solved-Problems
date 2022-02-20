#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    int i,f=1;
    if(n[0]!='1')
    {
        f=0;
    }
    else
    {
        for(i=1; i<n.size(); i++)
        {
            if(n[i]=='4'||n[i]=='1')
            {
                if(n[i]=='4'&&n[i-1]=='4'&&n[i+1]=='4')
                {
                    f=0;
                    break;
                }
            }
            else
            {
                f=0;
                break;
            }
        }
    }
    if(f)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
