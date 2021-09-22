#include <iostream>
using namespace std;
int main()
{
    int num, num2;
    int i, j;
    i = j = 0;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; ++i)
        cin >> arr[i];
    cin >> num2;
    int arr2[num2];
    for (int i = 0; i < num2; ++i)
        cin >> arr2[i];

    while (i != num && j != num2)
    {
        if (arr[i] == arr2[j])
        {
            cout << arr[i++] << " ";
            j++;
        }
        else if (arr[i] < arr2[j])
            i++;
        else
            j++;
    }
    return 0;
}