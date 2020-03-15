#include <cstdlib>
#include <iostream>

using namespace std;

void bar(void)
{
	cout << "Hello world" << endl;
	exit(0);
}

void foo(void)
{
	void* a[1];
	a[2] = (void*) bar;
}

int main(void)
{
	foo();
	return 0;
}
