#include <iostream>
using namespace std;

void print(int arr[][100], int r, int c){
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl; 
	}
}
int main(){
	int arr[1000][100];
	int r,c;
	cin>>r>>c;

	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin >> arr[i][j];
		}
	}
	print(arr, r, c);

	char num[][10] = {
		"one",
		"two",
		"three",
		"four",
		"five",
		"infinity",
	}
	return 0;
}