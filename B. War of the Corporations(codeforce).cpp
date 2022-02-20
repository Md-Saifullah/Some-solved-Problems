#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    while(cin>>a>>b)
    {
        int i,j,k,c=0;
        for(i=0;i<a.size();i++)
        {
            if(a[i]==b[0])
            {
                for(j=i,k=0;j<a.size()&&k<b.size();j++,k++)
                {
                    if(a[j]!=b[k])
                        {
                            break;
                        }
                }
                if(k==b.size())
                {
                    c++;
                    i+=k-1;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
