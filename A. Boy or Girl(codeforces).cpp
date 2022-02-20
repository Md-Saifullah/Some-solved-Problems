#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        int arr[1000],d=0;
        memset(arr,0,sizeof(arr));
        for(char a:s)
        {
            if(arr[a]==0)
            {
                arr[a]=1;
                d++;
            }
        }
        if(d%2)
        {
            cout<<"IGNORE HIM!\n";
        }
        else
        {
            cout<<"CHAT WITH HER!\n";
        }
    }
    return 0;
}
