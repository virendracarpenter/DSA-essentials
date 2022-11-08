#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int input)
{
	// Start
	int s = 0;
	// End
	int e = n - 1;

	while (s <= e)
	{
		int mid = (s + e) / 2;

		if (arr[mid] == input)
		{
			return mid;
		}
		else if (arr[mid] > input)
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	return -1;
}

int main()
{
	// Array Must be sorted first to do binary search
	int arr[] = {1, 6, 7, 8, 9, 14, 16, 17, 30};
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Enter element to search ";
	int input;
	cin >> input;
	cout << endl;

	cout << input << " ";
	
	int index = -1; 
	index = binarySearch(arr, n, input);

	if (index != -1)
	{
		cout << "Input Found at index " << index << endl;
	}
	else
	{
		cout << "Input Not Found!" << endl;
	}

	return 0;
}

/*
	Binary Search - fast & efficient, Search space is monotonic
	here 
	N = number of elements
	k = number of itreations

	///

	=>	N/(2^k) = 1
	=>	N = 2^k
	=>	k = log2 N

	complexity
	O(log N)

*/
