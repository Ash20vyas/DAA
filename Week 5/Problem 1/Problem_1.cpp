#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch;
    int ind = -1;
    int max = INT_MIN;
    int ansar[26] = {0};
    for (int i = 0; i < n; i++)
    {

        cin >> ch;
        ansar[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (ansar[i] > max)
        {
            ind = i;
            max = ansar[i];
        }
    }
    if (max > 1)
        cout << char('a' + ind) << " with occurance: " << ansar[ind] << endl;
    else
        cout << "DUPLICATES NOT FOUND" << endl;
}