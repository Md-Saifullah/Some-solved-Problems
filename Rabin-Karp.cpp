#include<bits/stdc++.h>
#include<math.h>
using namespace std;
long long createHash(string str,int last)
{
    long long p=1;
    long long hashValue=0;
    for(int i=0; i<last; i++)
    {
        hashValue+=(str[i]*p);
        p*=13;
    }
    return hashValue;
}
long long updateHash(long long hashValue,string str,int start,int subSize)
{
    double result=pow(13.0,1.0*subSize-1);
    long long p=str[start+subSize]*result;
    hashValue=((hashValue-str[start])/13)+p;
    return hashValue;
}
bool checkStr(string str,string subStr,int start,int subSize)
{
    for(int i=0; i<subSize; i++)
    {
        if(str[start+i]!=subStr[i])
        {
            return false;
        }
    }
    return true;
}
int rabinKarp(string str,string subStr)
{
    int subSize,strSize;
    long long strHash,subHash;
    subSize=subStr.size();
    strSize=str.size();
    strHash=createHash(str,subSize);
    subHash=createHash(subStr,subSize);

    for(int i=0; i<strSize-subSize; i++)
    {
        if(strHash==subHash)
        {
            if(checkStr(str,subStr,i,subSize))
            {
                return i;
            }
        }
        strHash=updateHash(strHash,str,i,subSize);
    }
    return -1;
}
int main()
{

    string str,subStr;
    freopen("input.txt","r",stdin);
    cout<<"Enter the String"<<endl;
    cin>>str;
    cout<<"Enter the sub String"<<endl;
    cin>>subStr;
    int result=rabinKarp(str,subStr);
    if(result!=-1)
    {
        cout<<"match found of the substring on index number "<<result<<" to "<<result+subStr.size()<<"(indexed from 0).";
    }
    else
    {
        cout<<"match not found of the substring";
    }
    return 0;
}
