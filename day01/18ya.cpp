#include <iostream>
using namespace std;

void foo(void)
{
	cout << "foo(void)" << endl;
}
void foo(int)
{
	cout << "foo(int)" << endl;

}

void foo(int, int)
{
	cout << "foo(int,int)" << endl;
}
void bar(float = 1.23)
{
	cout << "bar(float)" << endl;
}

int main(void)
{
	foo();
	foo(10);
	foo(20,30);
	bar();
	return 0;
}
