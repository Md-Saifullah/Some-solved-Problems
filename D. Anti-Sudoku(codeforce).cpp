#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j;
        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                char a;
                cin>>a;
                if(a=='1')
                {
                    cout<<"2";
                }
                else
                {
                    cout<<a;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}

