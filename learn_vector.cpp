#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c;
    vector<int> nc;
    nc.push_back(11);
    nc.push_back(12);
    nc.push_back(14);
    nc.push_back(16);
    nc.push_back(99);
    for(int i=0;i<16;i++)
    {
    int l=0;
    while(l<nc.size())
            {
                nc.at(l)--;
                if(nc.at(l)==0)
                {
                    nc.erase(nc.begin()+l);
                    continue;
                }
                l++;
            }
cout<<nc.size()<<endl;
    for(int i=0; i<nc.size(); i++)
        cout<<nc.at(i)<<" ";
        cout<<endl;
    }
}
