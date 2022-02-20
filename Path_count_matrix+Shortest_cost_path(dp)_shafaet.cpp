#include <bits/stdc++.h>
using namespace std;
struct str
{
    int v;
    int cost;
};
int main()
{
    int r, c, i, k;
    cout << "Enter the number of row : ";
    cin >> r;
    cout << "Enter the number of column : ";
    cin >> c;
    str arr[r][c];
    cout << "Enter the cost :" << endl;
    for (i = 0; i < r; i++)
    {
        for (k = 0; k < c; k++)
        {
            cin >> arr[i][k].cost;
        }
    }
    cout << endl<< "Path Count Table : " << endl;
    for (i = 0; i < r; i++)
    {
        for (k = 0; k < c; k++)
        {
            if (i == 0 || k == 0)
                arr[i][k].v = 1;
            else
            {
                arr[i][k].v = arr[i - 1][k].v + arr[i][k - 1].v;
            }
            cout << arr[i][k].v << " ";
        }
        cout << endl;
    }
    cout <<"Total ways to reach the last index from first index is "<<arr[r-1][c-1].v<<endl<<endl<< "Minimum Cost Path Table :" << endl;
    for (i = 0; i < r; i++)
    {
        for (k = 0; k < c; k++)
        {
            if (i == 0 && k == 0)
                arr[i][k].cost = arr[i][k].cost;
            else if (i == 0)
                arr[i][k].cost = arr[i][k].cost + arr[i][k - 1].cost;
            else if (k == 0)
                arr[i][k].cost = arr[i][k].cost + arr[i - 1][k].cost;
            else
                arr[i][k].cost = arr[i][k].cost + min(arr[i][k - 1].cost, arr[i - 1][k].cost);
            cout << arr[i][k].cost << " ";
        }
        cout << endl;
    }
    cout <<"Minimum cost path to reach the last index from first index is " << arr[r-1][c-1].cost;
    return 0;
}
