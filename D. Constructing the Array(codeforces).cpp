#include<bits/stdc++.h>
using namespace std;
struct segment
{
    int l;
    int h;
    int dis;
};
int result[200100];
void reset(int n)
{
    for(int i=1; i<=n; i++)
    {
        result[i]=0;
    }
}
class cmp
{
public:
    bool operator()(segment A,segment B)
    {
        if(A.dis==B.dis)
        {
            if(A.l>B.l)
                return true;
            else
                return false;
        }
        else if(A.dis<B.dis)
            return true;
        else
            return false;
    }
};
void fly(int n)
{
    priority_queue<segment,vector<segment>,cmp>pq;
    pq.push({1,n,n-1});
    int i=1;
    while(!pq.empty())
    {
        segment s=pq.top();
        pq.pop();
        int mid=(s.h+s.l)/2;
        result[mid]=i;
        i++;
        if(s.h>s.l)
        {
            if(mid-1>=s.l)
            {
                pq.push({s.l,mid-1,mid-s.l});
            }
            if(mid+1<=s.h)
            {
                pq.push({mid+1,s.h,s.h-mid});
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        fly(n);
        for(int i=1; i<=n; i++)
        {
            cout<<result[i];
            if(i!=n)
            {
                cout<<" ";
            }
        }
        cout<<endl;
        //reset(n);
    }
}
