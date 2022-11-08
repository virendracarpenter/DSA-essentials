#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	char route[1000];
	cin.getline(route, 1000);

	int x = 0;
	int y = 0;

	for(int i =0; route[i]!='\0'; i++)
	{

		switch(route[i])
		{
			case 'N' : y++;
					break;
			case 'S' : y--;
					break;
			case 'E' : x++;
					break;
			case 'W' : x++;
		}

		cout << "Final x and Y is " << x << " , " << y << endl;
	}
	 if (x>=0 and y>=0)
	 {
	 	while(y--)
	 	{
	 		cout << "N";
	 	}
	 	while(x--)
	 	{
	 		cout << "E";
	 	}
	 }

	 if (x<=0 and y<=0)
	 {
	 	while(y--) 
	 	{
	 		cout << "S";
	 	}
	 	while(x--)
	 	{
	 		cout << "E";
	 	}
	 }
	 


	return 0;
}