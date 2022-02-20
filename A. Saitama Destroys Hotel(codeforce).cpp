#include<bits/stdc++.h>
using namespace std;
struct Person
{
    int time,floor;
};
bool cmp(Person a,Person b)
{
    return (a.floor>b.floor)?true:false;
}
int main()
{
    int n,s;
    while(cin>>n>>s)
    {
        Person person[n];
        int i,t=0;
        for(i=0;i<n;i++)
        {
            cin>>person[i].floor>>person[i].time;
        }
        sort(&person[0],&person[n],cmp);
        for(i=0;i<n;i++)
        {
            t+=(s-person[i].floor);
            if(t<person[i].time)
                t+=(person[i].time-t);
                s=person[i].floor;
        }
        t+=s;
        cout<<t<<endl;

    }
}
