#include <iostream>
using namespace std;

int main(void)
{
	enum COLOR
	{
		RED,
		GREEN,
		BLUE,
		BLACK	
	}color;
	color = RED;
//	color = 0;
	int i = GREEN;
	cout << i << endl;
	return 0;
}
