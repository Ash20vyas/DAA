#include <iostream>
using namespace std;
void merge(int ar[], int l, int mid, int h)
{
    int a = l, b = mid + 1;
    int cur = 0;
    int n = h - l + 1;
    int temp[n];
    while (a <= mid && b <= h)
    {
        if (ar[a] <= ar[b])
        {
            temp[cur++] = ar[a++];
        }
        else
        {
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
    int siz, numb, fl = 1;
    cin >> siz;
    int ar[siz];
    for (int j = 0; j < siz; j++)
        cin >> ar[j];
    cin >> numb;
    mSort(ar, 0, (siz - 1));
    int start = 0, end = siz - 1;
    while (start < end)
    {
        if (ar[start] + ar[end] > numb)
        {
            end--;
        }
        else
        {
            if (ar[start] + ar[end] == numb)
            {
                cout << ar[start] << " " << ar[end] << ", ";
                fl = 0;
            }
            start++;
        }
    }
    if (fl == 1)
        cout << "NO SUCH PAIR" << endl;
    return 0;
}