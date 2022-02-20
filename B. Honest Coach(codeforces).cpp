#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,a,m=1001;
        cin>>n;
        vector<int>vec;
        for(i=0; i<n; i++)
        {
            cin>>a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        for(i=0; i<n-1; i++)
        {
            if(vec[i]==vec[i+1])
            {
                m=0;
                break;
            }
            else if(abs(vec[i]-vec[i+1])<m)
            {
                m=abs(vec[i]-vec[i+1]);
            }
        }
        cout<<m<<endl;
    }
    return 0;
}
