#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int t;
    in >> t;
    while (t--)
    {
        unordered_set<int> us;
        int n;
        in >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            in >> arr[i];
            us.insert(arr[i]);
        }
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                int sum = arr[i] + arr[j];
                if (sum > arr[n - 1])
                    break;
                if (us.find(sum) != us.end())

                {
                    for (int k = 0; k < n; k++)
                    {
                        if (sum == arr[k])
                        {
                            out << i + 1 << ", " << j + 1 << ", " << k + 1 << endl;
                            goto outer;
                        }
                    }
                }
            }
        }
        out << "No sequence found" << endl;
    outer:
        continue;
    }
    return 0;
}