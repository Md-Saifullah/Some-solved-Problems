#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,a,f=0,c1,c2;
        cin>>n;
        priority_queue <int, vector<int>, greater<int>> pq;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a==2048)
                f=1;
            else if(a<2048)
            {
                pq.push(a);
            }
        }
        if(f)
        {
            cout<<"YES\n";
            continue;
        }
        while(pq.size()>1)
        {
            c1=pq.top();
            pq.pop();
            c2=pq.top();
            pq.pop();
            if(c1==c2)
            {
                pq.push(c1+c2);
            }
            else
            {
                pq.push(c2);
            }
            if(pq.top()==2048)
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}


