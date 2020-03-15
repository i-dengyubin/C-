#include <iostream>
using namespace std;

class A {
public:
		void foo(void) {
			cout << "A::foo()"	 << endl;
		}
		/*
		void foo(int data) {
			cout << "A::foo(int)"	 << endl;
		}
		*/
		int m_data;
};

class B {
public:
		void foo(int i) {
			cout << "B::foo(int)" << endl;
		}
		typedef int m_data;
};

class C : public A, public B {
public:
	using A::foo;
	using B::foo;
	void foo(int data) {
		cout << "C::foo(int)" << endl;
	}
	// 子类覆盖
};
int main(void) {
	C c;
	c.foo();
	c.foo(100);
	c.A::m_data = 10;
	C::B::m_data i = 20;
	return 0;
}
