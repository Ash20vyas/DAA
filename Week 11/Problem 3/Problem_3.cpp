#include <bits/stdc++.h>
using namespace std;

bool parta(vector<int> vec, int su, int n)
{
    if (su == 0 && n == vec.size())
        return true;
    if (n >= vec.size())
        return false;
    return parta(vec, su, n + 1) || parta(vec, su - vec[n], n + 1);
}

int main()
{
    int n, a, b;
    cin >> n;
    vector<int> vec;
    int su = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        su = su + a;
        vec.push_back(a);
    }
    if (su % 2 == 1)
        cout << "Subset formation impossble" << endl;
    else
    {
        bool ans = parta(vec, su / 2, 0);
        if (ans)
            cout << "Yes";
        else
            cout << "Subset formation impossble";
    }
}