#include <iostream>
using namespace std;
//quicksort
int comp = 0, inversion = 0;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int pivo(int ar[], int lo, int hi)
{
    int pivt = ar[hi];
    int i = (lo - 1);
    for (int j = lo; j < hi; j++)
    {
        comp++;
        if (ar[j] <= pivt)
        {
            i++;
            inversion++;
            swap(&ar[i], &ar[j]);
        }
    }

    swap(&ar[i + 1], &ar[hi]);
    inversion++;
    return (i + 1);
}
void qSort(int ar[], int lo, int hi)
{
    int piv;
    if (lo < hi)
    {
        piv = pivo(ar, lo, hi);
        qSort(ar, lo, piv - 1);
        qSort(ar, piv + 1, hi);
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
        qSort(ar, 0, (siz - 1));
        for (int j = 0; j < siz; j++)
            cout << ar[j] << " ";
        cout << endl;
        cout << "COMPARISION: " << comp << endl;
        cout << "INVERSION: " << inversion << endl;
    }
    return 0;
}