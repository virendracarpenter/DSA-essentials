#include <iostream>
using namespace std;

void bubbleSort(int a[], int n)
{
    for (int t = 0; t <= n - t; t++)
    {
        for (int j = 0; j <= n - t - 1; j++)
        {
            cout << a[j] << " " << a[j+1] << " | ";
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
        cout << endl;
    }


}

int main()
{
    int arr[] = {5, 4, 8, 8, 9, 7, 221, -47, -56, 64, 12, 21, 5};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}