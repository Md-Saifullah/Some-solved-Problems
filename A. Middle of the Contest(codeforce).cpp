#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    while(cin>>h1)
    {
        int diff=0;
        getchar();
        cin>>m1>>h2;
        getchar();
        cin>>m2;
        if(h2<h1)
        {
            h2+=24;
        }
        if(m2<m1)
        {
            m2+=60;
            h2-=1;
        }
        diff=(((h2-h1)*60)+(m2-m1))/2;
        m1+=diff%60;
        h1+=(diff/60)+(m1/60);
        h1=h1%24;
        m1=m1%60;
        if(h1<10)
        {
            cout<<0;
        }
        cout<<h1<<":";
        if(m1<10)
        {
            cout<<0;
        }
        cout<<m1<<endl;
    }

    return 0;
}


