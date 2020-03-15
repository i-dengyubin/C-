#include <iostream>
using namespace std;

namespace ns1
{
	void foo(int i)
	{
		cout << "ns1::foo()" << " " << i << endl;
	}
}

namespace ns2
{
	void foo(double d)
	{
		cout << "ns2::foo()" << " " << d << endl;
	}
}

int main(void)
{
	using namespace ns1;
	using namespace ns2;
	// ns1 和 ns2都可见，构成重载
	foo(1);
	foo(1.2);
	// ns1::foo被引入当前作用域，隐藏了ns2::foo
	using ns1::foo;
	foo(10);
	foo(1.23);
	// ns1::foo 和 ns2::foo 都在当前作用域中，构成重载
	using ns2::foo;
	foo(10);
	foo(1.23);
	return 0;
}
