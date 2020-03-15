#include <iostream>
using namespace std;

int foo(void)
{
		int a = 100;
		return a;
}

int main(void)
{
		const int& r = foo();
		cout << r << endl;
		cout << &r << endl;
		// cout << &foo() << endl;
		int a = 10, b = 20;
		const int& c = a + b;
		cout << c << endl;
		return 0;
}
