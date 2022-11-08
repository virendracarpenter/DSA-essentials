#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	int arr[] = {1, 6, 5, 8, 9, 4, 6, 7};
	int n = sizeof(arr) / sizeof(arr[0]);

	int input = 7;
	cout << input << " ";
	if (linearSearch(arr, n, input))
	{
		cout << "Input Found" << endl;
	}
	else
	{
		cout << "Input Not Found!" << endl;
	}

	return 0;
}
