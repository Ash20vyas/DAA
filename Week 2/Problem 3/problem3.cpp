#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    int t;
    ifstream in("input.txt");
    ofstream out("output.txt");
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
        int key, count = 0;
        in >> key;
        for (int i = 0; i < n; i++)
        {
            int j = arr[i] + key;
            if (us.find(j) != us.end())
            {
                count++;
            }
        }
        out << count << endl;
    }
    return 0;
}