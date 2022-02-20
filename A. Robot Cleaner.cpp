#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,rb,cb,rd,cd,disx=0,disy=0;
        cin>>r>>c>>rb>>cb>>rd>>cd;
        if(rb==rd||cb==cd)
        {
            cout<<0;
        }
        else
        {
            if(rb<rd)
                disy=rd-rb;
            else
                disy=(2*r)-rb-rd;
            if(cb<cd)
                disx=cd-cb;
            else
                disx=(2*c)-cb-cd;
            cout<<min(disx,disy);
        }
        cout<<endl;
    }
    return 0;
}
