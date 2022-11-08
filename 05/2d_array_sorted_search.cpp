#include<iostream>
using namespace std;

pair<int,int> staircaseSearch(int arr[][4], int n, int m, int key){
	if(key < arr[0][0] or key > arr[n-1][m-1]){
		return{-1,-1};
	}

	int i = 0; 
	int j = m-1;

	while(i <= n-1 and j >= 0){
		if(arr[i][j]==key){
			return {i, j};
		} else if(arr[i][j]>key){
			j--;
		} else{
			i++;
		}
	}
	return {-1, -1};
}


int main(){
	int arr[][4] ={{10, 20, 30, 40},
					{15, 25, 35, 45},
					{27, 29, 37, 48}, 
					{32, 33, 39, 50}};
	pair<int,int> coords = staircaseSearch(arr, 4, 4, 33);
	cout << coords.first<<" "<< coords.second << endl;
	return 0;
}

