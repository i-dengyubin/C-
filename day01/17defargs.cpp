#include <iostream>
using namespace std;

void foo(int a = 1, int b = 1234, const char* c = "Hello", double d = 1.23)
{
	cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
}

void foo(int/* a = 1*/, int /*b = 1234*/, const char* /*c = "Hello"*/, double /*d = 1.23*/);

void fun(int x) {}
void fun(int x, int y = 0){}
int main()
{
	foo(10, 20, "30", 40.);
	foo(10,20,"30");
	foo(10,20);
	foo(10);
	foo();
//	fun(1); // 冲突
	fun(1,3);
	return 0;
}
