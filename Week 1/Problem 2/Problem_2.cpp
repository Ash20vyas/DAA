#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x,count;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> x;
        count = 0;
        int l=0,u=n,m = (l+u)/2;
        while (l<u)
        {
            count++;
            if (arr[m] == x)
            {
                cout << "Present " << count << endl;
                goto outer;
            }
            else if (arr[m]<x)
                l = m+1;
            else
                u = m;
            m = (l+u)/2;
        }
        cout << "Not Present " << count << endl;
        outer: continue;
    }
    return 0;
}