#include<iostream>
using namespace std;


void selectionSort(int a[], int n){

	for (int i = 0; i <= n-2; ++i)
	{	
		int current = a[i];
		int min = i;

		for (int j = i; j < n; ++j)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		swap(a[min], a[i]);
	}
}

int main(){
	int arr[] = {3, 2, 6, 1, -3, 0, 1, 4, 54};
	int n = sizeof(arr)/sizeof(int);
	selectionSort(arr, n);

	for (auto x : arr)
	{
		cout << x << ", ";
	}
	cout << endl;

	return 0;
}