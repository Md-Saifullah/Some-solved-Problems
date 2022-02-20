#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        int i,n,j,k;
        string s;
        getline(cin,s);
        i=s.size();
        n=sqrt(i);
        if((n*n)!=i)
        {
            cout<<"INVALID\n";
        }
        else
        {
            for(j=0; j<n; j++)
            {
                for(k=j; k<i; k+=n)
                {
                    cout<<s[k];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
