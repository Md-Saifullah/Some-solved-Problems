#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[200]= {0},f=0;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0; i<s1.size(); i++)
        {
            arr[s1[i]]++;
        }
        for(int i=0; i<s1.size(); i++)
        {
            if(arr[s2[i]])
            {
                f=1;
                break ;
            }
        }
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
