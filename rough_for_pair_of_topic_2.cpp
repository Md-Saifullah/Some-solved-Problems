#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*string a;
    int b;
    getline(cin,a);
    b=a.size();
    cout<<b<<endl<<a;*/
    int i,a[100000];
    a[0]=1;
    a[99999]=2;
    for(int b:a)
    {
        i++;
        cout<<b<<" ";
    }
    cout<<endl<<i;
    return 0;
}
