#include<iostream>
using namespace std;

void insertionSort(int a[], int n){
	for (int i = 1; i < n; ++i)
	{
		int current = a[i];
		int prev = i -1;

		while(prev>=0 && a[prev] > current)
		{	
			a[prev + 1] = a[prev];
			prev = prev -1;
		}	
		a[prev+1] = current;
		cout << endl;
	}
}

int main(){
	int arr[] = {3, 2, 6, 1, -3, 0, 1, 4, 54};
	int n = sizeof(arr)/sizeof(int);
	insertionSort(arr, n);

	for (auto x : arr)
	{
		cout << x << ", ";
	}
	cout << endl;

	return 0;
}