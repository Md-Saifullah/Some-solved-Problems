#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    vector<int>vec(n);
    for(i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    for(i=0; i<n-2; i++)
    {
        if(vec[i]+vec[i+1]>vec[i+2])
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
