#include <iostream>
using namespace std;

void foo(void)
{
	cout << "foo(1)" << endl;
}

void foo(int a)
{
	cout << "foo(2)" << endl;
}

void foo(int a, int b)
{
	cout << "foo(3)" << endl;
}

/*
int foo(int a, int b)
{
	cout << "foo(4)" << endl;
}*/

int foo(int a, float b)
{
	cout << "foo(5)" << endl;
}


void foo(float a, int b)
{
	cout << "foo(6)" << endl;
}
// 需要类型升级转换 char-> int
void bar(char* p, int n)
{
	cout << "bar(1)" << endl;
}
// 仅需进行常量转换char* --> const char*优先
void bar(const char* p, char c)
{
	cout << "bar(2)" << endl;
}
// 需要标准转换short --> char 信息丢失
void fun(char c)
{
	cout << "fun(1)" << endl;
}
// 升级转换short--> int，信息完整，优先
void fun(int a)
{
	cout << "fun(2)" << endl;
}
// 过分的升级转换short --> long long
void fun(long long ll)
{
	cout << "fun(3)" << endl;
}
// 省略号匹配特异性最差
void hum(double f, ...)
{
	cout << "hum(1)" << endl;
}
// 仅需标准转换double --> int，优先
void hum(int a, int b)
{
	cout << "hum(1)" << endl;
}
int main(void)
{
	foo();
	foo(2);
	foo(1,3);
	foo(1, 1.23f);
	foo(1.23f, 10);
	void (*pfunc) (float, int) = foo;
	pfunc(1.23f, 10);
	char *p ;
	char c;
//	bar(p, c);
	short s = 2;
	fun(s);
//	hum(1.23, 12);
	return 0;
}
