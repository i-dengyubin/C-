#include <iostream>
using namespace std;

int main(void)
{
	int a = 100;
	int& b = a;
	int& c = b;
	++b;
	cout << &a << ' ' << &b <<  ' ' << &c << endl;
	++c;
	cout << a << ' ' << b  << ' '<< c << endl;
	int x = 200;
	b = x;
	cout << a << ' ' << b  << ' '<< c << endl;

	int* p = NULL;
	int& d = *p;
	// d = 100; // 结果未定义
	return 0;
}
