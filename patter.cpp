#include <iostream>
using namespace std;

int main(){
	int n = 5;
	int up = n/2+1;
	int temp = up;
	do{
		for(int i = 0; i < up; i++){
			cout << "* ";
		}
		for(int i = 0; i < temp - up; i++){
			cout << "    ";
		}
		
		for(int i = 0; i < up; i++){
			cout << "* ";
		}
		cout << endl;
	} while(up--);
	return 0;
}
/*
* * * * *
* *   * *
*		*
* *   * *
* * * * *
*/