#include<bits/stdc++.h>
using namespace std;
int checkPrimeFactor(int a)
{
    int check;
    while(a!=1)
    {
        if(a%2==0)
        {
            a=a/2;
        }
        else if(a%3==0)
        {
            a=a/3;
        }
        else if(a%5==0)
        {
            a=a/5;
        }
        else
        {
            check=0;
            break;
        }
        if(a==2||a==3||a==5)
        {
            check=1;
            break;
        }
    }
    return check;
}
int main()
{
    int i,j;
    i=11;
    j=15;
    while(i<1500)
    {
        j++;
        if(checkPrimeFactor(j)==1)
        {
            i++;
        }
    }
    cout<<"The 1500'th ugly number is "<<j<<".";
    return 0;
}
