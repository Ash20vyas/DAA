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
        int n,x,count;
        in >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            in >> arr[i];
        }
        in >> x;
        count = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if(x == arr[i])
            {
                out << "Present " << count << endl;
                goto outer;
            }
        }
        out << "Not Present " << count << endl;
        outer: continue;
    }
    return 0;
}