#include <iostream>
using namespace std;

int main(void)
{
	bool b = true;
	cout << sizeof(b) << " " << b << endl;
	b = false;
	cout << b << endl;
	cout << boolalpha << b  << endl;
	b = 1234;
	cout << b << endl;
	b = 3.14;
	cout << b << endl;
	b = 0.0;
	cout << b << endl;
	b = "hello , world" ;
	cout << b << endl;
	b = NULL;
	cout << b << endl;
	return 0;
}
