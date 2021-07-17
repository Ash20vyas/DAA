#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream in("file.txt");
    ofstream out("output.txt");
    int n,t,x,count,flag;
    in >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        in >> arr[i];
    }
    in >> t;
    while (t--)
    {
        in >> x;
        count = flag = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if(x == arr[i])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            out << "Found after " << count << " comparisons" << endl;
        else
            out << "Not Found" << endl;
    }
    in.close();
    out.close();
    return 0;
}