//median and majority
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        vec.push_back(a);
    }
    //finding majority
    int maj = 1, ind = 0;
    for (int i = 1; i < n; i++)
    {
        if (vec[i] == vec[ind])
            maj++;
        else
        {
            maj--;
            if (maj == 0)
            {
                ind = i;
                maj = 1;
            }
        }
    }
    int co = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == vec[ind])
            co++;
    }
    if (co > vec.size() / 2)
    {
        cout << "Yes" << endl;
        cout << vec[ind];
    }
    else
    {
        cout << "no" << endl;
        sort(vec.begin(), vec.end());
        if (vec.size() % 2 == 1)
        {
            cout << vec[vec.size() / 2];
        }
        else
        {
            cout << (vec[vec.size() / 2] + vec[vec.size() / 2 + 1]) / 2;
        }
    }
}