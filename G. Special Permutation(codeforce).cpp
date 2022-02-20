#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=5;
        vector<int>a,b;
        cin>>n;
        if(n>3)
        {
            while(i<n)
            {
                a.push_back(i);
                b.push_back(i+1);
                i+=2;
            }
            if(n%2)
            {
                a.push_back(i);
            }
            for(int j=b.size()-1;j>=0;j--)
            {
                cout<<b[j]<<" ";
            }
            cout<<"3 1 4 2 ";
            for(int j:a)
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}

