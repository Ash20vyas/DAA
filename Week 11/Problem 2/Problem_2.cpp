#include <bits/stdc++.h>
using namespace std;
int dp[100][100];

int su(vector<int> vec, int a, int b)
{
    if (b == 0)
        return 1;
    if (a >= vec.size() || b < 0)
        return 0;
    return su(vec, a + 1, b) + su(vec, a, b - vec[a]);
}
int main()
{
    memset(dp, -1, sizeof dp);
    int n, a, b;
    cin >> n;
    int sou = 0;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    cin >> b;
    sou = su(vec, 0, b);
    cout << sou;
}