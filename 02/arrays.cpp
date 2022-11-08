#include <iostream>
using namespace std;

void printArray(int arr[],int n) {
    cout << "Function ";
    arr[0] = 100;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ,";
    }
}

int main()
{
    int marks[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(marks)/sizeof(int);

    cout << "Main ";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ,";
    }
    cout << endl;
    printArray(marks,n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ,";
    }
    cout << endl;
    return 0;
}