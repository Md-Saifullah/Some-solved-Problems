#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of rows and columns: ";
    int row,col;
    cin>>row>>col;
    int path[row][col];
    int cost[row][col];
    int total_cost[row][col];
    cout<<"enter the cost of the cells"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>cost[i][j];
        }
    }
    cout<<endl<<"The path count table: "<<endl<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        if(i==0||j==0)
        {
            path[i][j]=1;
            if(i==0&&j==0)
            {
                total_cost[i][j]=cost[i][j];
            }
            else if(i==0)
            {
                total_cost[i][j]=total_cost[i][j-1]+cost[i][j];
            }
            else
            {
                total_cost[i][j]=total_cost[i-1][j]+cost[i][j];
            }
        }
        else
        {
            path[i][j]=path[i-1][j]+path[i][j-1];
            total_cost[i][j]=min(total_cost[i-1][j],total_cost[i][j-1])+cost[i][j];
        }
        cout<<path[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<"There is "<<path[row-1][col-1]<<" path to go to the bottom right cell from top left cell."<<endl<<endl<<"The shortest cost path table: "<<endl<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
        cout<<total_cost[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl<<"The shortest cost path to go to the bottom right cell from top left cell is: "<<total_cost[row-1][col-1]<<endl;
    return 0;
}


