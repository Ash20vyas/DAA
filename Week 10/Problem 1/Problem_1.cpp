#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> vec;
    int n;
    cin >> n;
    int a[n];
    int b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {

        vec.push_back(make_pair(b[i], a[i]));
    }
    sort(vec.begin(), vec.end());
    int cou = 0, st = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (vec[i].second > st)
        {
            ans.push_back(i + 1);
            st = vec[i].first;
            cou++;
        }
    }
    cout << "No. of non-conflicting activities: " << cou << endl;
    cout << "List of selected activities: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}