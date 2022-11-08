#include <iostream>
using namespace std;

int main(){
	char num[][10] = {
		"one",
		"two",
		"three",
		"four",
		"five",
		"infinity",
	};
	cout << *num << endl;
	cout << num[1]<<endl;
	cout << num[0][1]<<endl;
	cout << &num<<endl;
	cout << num<<endl;
	// cout << num[0][]<<endl;


	return 0;
}