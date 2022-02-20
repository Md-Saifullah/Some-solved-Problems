#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,zero=0,i;
        vector<char>vec;
        string s;
        cin>>n>>s;
        for(i=n-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else
            {
                if(zero!=0)
                {
                    zero=1;
                }
                else
                {
                    vec.push_back('1');
                }
            }
        }
        for(i=0; i<zero; i++)
        {
            vec.push_back('0');
        }
        for(i=vec.size()-1; i>=0; i--)
        {
            cout<<vec[i];
        }
        cout<<endl;
    }
    return 0;
}
