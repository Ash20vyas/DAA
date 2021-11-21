#include <bits/stdc++.h>
using namespace std;
//fractional knapsack
int main()
{
    float N, ele, maxcap;
    float ans = 0, cu;
    cin >> N;
    vector<float> item, weig;
    vector<pair<int, int>> answ;
    for (float i = 0; i < N; i++)
    {
        cin >> ele;
        weig.push_back(ele);
    }
    for (float i = 0; i < N; i++)
    {
        cin >> ele;
        item.push_back(ele);
    }
    vector<pair<float, pair<float, float>>> an;
    for (float i = 0; i < N; i++)
    {
        cu = item[i] / weig[i];
        an.push_back(make_pair(cu, make_pair(item[i], weig[i])));
    }
    cin >> maxcap;
    sort(an.begin(), an.end());
    for (int i = N - 1; i >= 0; i--)
    {
        if (an[i].second.second <= maxcap)
        {
            ans = ans + (an[i].second.first);
            maxcap = maxcap - an[i].second.second;
            answ.push_back(make_pair(an[i].second.first, an[i].second.second));
        }
        else
        {
            ans = ans + (maxcap * an[i].first);
            answ.push_back(make_pair(an[i].second.first, an[i].second.second));

            break;
        }
    }
    cout << "Maximum value : " << ans << endl;
    cout << "Item-weight" << endl;

    for (int i = 0; i < answ.size(); i++)
        cout << answ[i].first << "-" << answ[i].second << endl;
}