#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,i,d,r=0,j,a;
    cin>>k;
    if(k==1)
    {
        cout<<"codeforces\n";
        return 0;
    }
    i=0;
    while(r<k)
    {
        i++;
        r=pow(i,10);
    }
    d=pow(i-1,10);
    j=0;
    while(d<k)
    {
        j++;
        d=(d*i)/(i-1);
    }
    string b="codeforces";
    string result="";
    for(a=0; a<j; a++)
    {
        string temp(i,b[a]);
        result+=temp;
    }
    while(a<10)
    {
        string temp(i-1,b[a]);
        result+=temp;
        a++;
    }
    cout<<result<<endl;
    return 0;
}
