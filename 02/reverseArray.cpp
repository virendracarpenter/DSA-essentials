#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main()
{
    // Array Must be sorted first to do binary search
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    reverseArray(arr, n);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int arrr[] = {5, 1, 2, 89, 47, 8, 64, 15, 64};
    n = sizeof(arrr) / sizeof(int);

    for (int i = 0; i < n; i++)
    {
        cout << arrr[i] << " ";
    }
    reverseArray(arrr, n);
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arrr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*

*/
