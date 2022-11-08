#include<iostream>
using namespace std;

void print(int arr[][10], int r, int c){
	int startRow = 0;
	int endRow = r-1;
	int startCol =0;
	int endCol = c-1;

	while(startCol <= endCol) {
	    for(int col = startCol; col <= endCol; col++){
	    	cout << arr[startRow][col] << " ";
	    }
	    for(int row = startRow + 1; row <= endRow; row++){
	    	cout << arr[row][endCol] << " ";
	    }
	    for(int col = endCol -1; col >= startCol; col--){
	    	if(startRow == endRow){
	    		break;
	    	}
	    	cout << arr[endRow][col] << " ";
	    }
	    for(int row = endRow-1; row >= startRow + 1; row--){
	    	if(startCol == endCol){
	    		break;
	    	}
	    	cout << arr[row][startCol] << " ";
	    }
	    startRow++;
	    endRow--; 
	    startCol++;
	    endCol--;
	}
}


int main(){
	int arr[][10] ={{100, 2, 3, 66, 4},
					{12, 13, 14, 56, 5},
					{11, 12, 33, 87, 54}, 
					{19, 3, 34, 88,22}};
	print(arr,4,5);

	return 0;
}

