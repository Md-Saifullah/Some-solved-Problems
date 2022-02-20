#include<bits/stdc++.h>
using namespace std;
void makeLpsTable(string pattern,int len)
{
    int lps[len+5],i=0,j=1;
    lps[0]=0;
    while(j<len)
    {
        if(pattern[i]==pattern[j])
        {
            i++;
            lps[j]=i;
            j++;
        }
        else
        {
            if(i==0)
            {
                lps[j]=0;
                j++;
            }
            else
            {
                i=lps[i-1];
            }
        }
    }
    cout<<"The String is "<<pattern<<endl<<"Table:"<<endl;
    for(i=0;i<len;i++)
    {
        cout<<lps[i]<<" ";
    }
}
int main()
{
    string pattern="PAAAPAMAPAA";
    makeLpsTable(pattern,pattern.size());
}
