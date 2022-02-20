#include<bits/stdc++.h>
using namespace std;
bool validCheck(char a)
{
    if(a=='A'||a=='H'||a=='I'||a=='M'||a=='O'||a=='T'||a=='U'||a=='V'||a=='W'||a=='X'||a=='Y')
        return false;
    return true;
}
int main()
{
    string s;
    while(cin>>s)
    {
        int f=1,n=s.size(),i,j;
        if(n%2)
        {
            if(validCheck(s[n/2]))
            {
                f=0;
                goto l;
            }
            i=(n/2)+1;
        }
        else
        {
            i=n/2;
        }
        j=(n/2)-1;
        while(i<n)
        {
            if(validCheck(s[i])||s[i]!=s[j])
            {
                f=0;
                break;
            }
            i++;
            j--;
        }
l:
        if(f)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
