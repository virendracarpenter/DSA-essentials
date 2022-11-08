#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char a[] = {'a','b','c','d','e','f','g'}; //not vaild as it print garbage values
	char c[] = {'a','b','c','d','e','f','g','\0'}; // vaild as it defines end character
	char b[] = "abcdefg";

	cout << a << endl;
	cout << b << endl;
	cout << c << endl << endl;

	cout << strlen(a) << endl;
	cout << strlen(b) << endl;
	cout << strlen(c) << endl << endl;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;


	return 0;
}