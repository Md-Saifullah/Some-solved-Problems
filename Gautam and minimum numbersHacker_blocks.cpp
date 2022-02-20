#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int a,b,c,q_type,k;
        priority_queue <int, vector<int>, greater<int>> pq;
        for(int i=0; i<n; i++)
        {
            cin>>c;
            pq.push(c);
        }
        while(pq.size()>1)
        {
            cin>>q_type>>k;
            a=pq.top();
            pq.pop();
            b=pq.top();
            pq.pop();
            if(q_type==1)
            {
                pq.push(a+b+k);
            }
            else
            {
                pq.push((a-b)+k);
            }
        }
        cout<<pq.top()<<endl;
    }
    return 0;
}
