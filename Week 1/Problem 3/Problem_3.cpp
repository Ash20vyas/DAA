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
        int l = 0,u = 2;
        while (u < n)
        {
            count++;
            if(arr[l] <= x && x < arr[u])
                goto found;
            l = u;
            u *= 2;
        }
        count++;
        if(arr[l] <= x && x <= arr[n-1])
            goto found;
        out << "Not Present " << count << endl;
        continue;
        found : for(int i = l; i < u && i < n; i++)
        {
            if(arr[i] == x)
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