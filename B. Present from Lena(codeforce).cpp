#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int j=0,f=0,i,k,l;
        while(j<=2*n)
        {
            if(j<n&&f==0)
            {
                for(i=j; i<n; i++)
                {
                    cout<<"  ";
                }
                for(k=0; k<=j; k++)
                {
                    if(k==0)
                        cout<<k;
                    else
                        cout<<" "<<k;
                    if(k==j)
                    {
                        l=k;
                        while(l>0)
                        {
                            l--;

                                cout<<" "<<l;
                        }
                    }
                }
            }
            else if(j==n)
            {
                for(k=0; k<=j; k++)
                {
                    if(k==0)
                        cout<<k;
                    else
                        cout<<" "<<k;
                    if(k==j)
                    {
                        l=k;
                        while(l>0)
                        {
                            l--;
                                cout<<" "<<l;
                        }
                    }
                }
                f=1;
            }
            else
            {
                for(i=2*n-j; i<n; i++)
                {
                    cout<<"  ";
                }
                for(k=0; k<=2*n-j; k++)
                {
                    if(k==0)
                        cout<<k;
                    else
                        cout<<" "<<k;
                    if(k==2*n-j)
                    {
                        l=k;
                        while(l>0)
                        {
                            l--;
                            cout<<" "<<l;
                        }
                    }
                }
            }
            cout<<endl;
            j++;
        }
    }
}
