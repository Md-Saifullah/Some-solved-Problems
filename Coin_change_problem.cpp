#include <bits/stdc++.h>
using namespace std;
int dp(int arr[], int coins, int n)
{
    int table[coins + 1][n + 1],x;
    for (int i = 0; i <= coins; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(j==0)
                table[i][j]=1;
            else if(i==0)
                table[i][j]=0;
            else
            {
                if (j - arr[i] < 0)
                    x = 0;
                else
                    x = table[i][j - arr[i]];
                table[i][j] = x + table[i - 1][j];
            }
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    return table[coins][n];
}
int main()
{
    cout << "Enter the number of  coins: ";
    int coins, n, i,x;
    cin >> coins;
    cout << "Enter the values of the coins: ";
    int arr[coins + 1];
    arr[0] = 0;
    for (int i = 1; i <= coins; i++)
        cin >> arr[i];
    cout << "Enter the amount of money: ";
    cin >> n;
    x=dp(arr, coins, n);
    cout<<"\nThe number of ways of changing "<<n<<" in coins ";
    for(i=1; i<=coins; i++)
        if(i==coins)
            cout<<arr[i];
        else
            cout<<arr[i]<<", ";
    cout<<" are: " << x;
    return 0;
}
