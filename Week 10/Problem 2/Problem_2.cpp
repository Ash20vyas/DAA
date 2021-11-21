#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    cin >> n;
    vector<int> ttk, dl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ttk.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        dl.push_back(a);
    }
    vector<pair<pair<int, int>, int>> ve;
    for (int i = 0; i < n; i++)
        ve.push_back(make_pair(make_pair(dl[i], ttk[i]), i + 1));
    sort(ve.begin(), ve.end());
    int nc = 0;
    int st = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (ve[i].first.first >= st + ve[i].first.second)
        {
            ans.push_back(ve[i].second);
            nc++;
            st = st + ve[i].first.second;
        }
    }
    cout << "Max number of tasks = " << nc << endl;
    cout << "Selected task numbers : ";
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}