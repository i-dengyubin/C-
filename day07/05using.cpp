#include <iostream>

using namespace std;

class A{
public:
	void foo(void) {
		cout << "A::foo()"	 << endl;
	}
	void foo(int i) {
		cout << "B:foo()" << endl;
	}
	int m_data;
};

class B:public A {
public:
		using A::foo;
		void foo(int i) {
			cout << "B::foo()"	 << endl;
		}
		typedef int m_data;
};

int main(void) {
	B b;
	b.foo();	
	b.foo(100); // 优先子类
	b.A::m_data = 1000;
	B::m_data i = 2000; // int i = 2000;
	return 0;
}
