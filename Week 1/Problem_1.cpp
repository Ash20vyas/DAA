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
        for (int i = 0; i < n; i++)
        {
            count++;
            if(x == arr[i])
            {
                cout << "Present " << count << endl;
                goto outer;
            }
        }
        cout << "Not Present " << count << endl;
        outer: continue;
    }
    return 0;
}