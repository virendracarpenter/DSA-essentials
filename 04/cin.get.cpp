#include <iostream>
using namespace std;

int main()
{
	char temp = cin.get();

	int len = 1;

	while(temp!='\n'){
		len++;
		cout << temp;
		temp = cin.get();
	}

	cout << " Length " << len << endl;

	return 0;
}