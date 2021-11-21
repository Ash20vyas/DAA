//prims algo
#include <bits/stdc++.h>
using namespace std;
int prim(vector<vector<int>> &v, int n)
{
    vector<bool> vis(n, false);
    vector<int> wei(n, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mh;
    int s = 0;
    wei[s] = 0;
    mh.push(make_pair(wei[s], s));
    while (!mh.empty())
    {
        int i = mh.top().second;
        mh.pop();
        if (!vis[i])
        {
            vis[i] = true;
            for (int j = 0; j < n; j++)
            {
                if (!vis[j] && v[i][j] != 0 && v[i][j] < wei[j])
                {
                    wei[j] = v[i][j];
                    mh.push(make_pair(wei[j], j));
                }
            }
        }
    }
    int sum = 0;
    for (auto i : wei)
        sum = sum + i;
    return sum;
}
int main()
{
    int n, t;
    cin >> n;
    vector<vector<int>> v;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        vec.clear();
        for (int j = 0; j < n; j++)
        {
            cin >> t;
            vec.push_back(t);
        }
        v.push_back(vec);
    }
    cout << "Minimum spanning weight : " << prim(v, n);
}