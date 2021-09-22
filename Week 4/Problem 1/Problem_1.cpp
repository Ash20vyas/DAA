#include <iostream>
using namespace std;
int comp = 0, inversion = 0;
void merge(int ar[], int l, int mid, int h)
{
    int a = l, b = mid + 1;
    int cur = 0;
    int n = h - l + 1;
    int temp[n];
    while (a <= mid && b <= h)
    {
        comp++;
        if (ar[a] <= ar[b])
        {
            temp[cur++] = ar[a++];
        }
        else
        {
            inversion++;
            temp[cur++] = ar[b++];
        }
    }
    while (a <= mid)
    {
        temp[cur] = ar[a];
        a++;
        cur++;
    }
    while (b <= h)
    {
        temp[cur] = ar[b];
        b++;
        cur++;
    }
    int z = 0;
    for (int i = l; i <= h; i++)
    {

        ar[i] = temp[z++];
    }
}
void mSort(int ar[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        mSort(ar, l, mid);
        mSort(ar, mid + 1, h);
        merge(ar, l, mid, h);
    }
}

int main()
{
    int t, siz;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        cin >> siz;
        int ar[siz];
        for (int j = 0; j < siz; j++)
            cin >> ar[j];
        mSort(ar, 0, (siz - 1));
        for (int j = 0; j < siz; j++)
            cout << ar[j] << " ";
        cout << endl;
        cout << "COMPARISION: " << comp << endl;
        cout << "INVERSION: " << inversion << endl;
    }
    return 0;
}