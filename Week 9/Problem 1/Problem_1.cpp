//floydwarshall
#define INF INT_MAX
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n][n], ans[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
            if (i != j && ar[i][j] == 0)
                ar[i][j] = INF;
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i][j] > (ar[i][k] + ar[k][j]) && (ar[k][j] != INF && ar[i][k] != INF))
                    ar[i][j] = ar[i][k] + ar[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar[i][j] == INF)
                cout << "INF ";
            else
                cout << ar[i][j] << " ";
        }
        cout << endl;
    }
}